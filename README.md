# Sistema de Gestión de Demanda y Deslastre de Carga en Micro-redes Eléctricas (ROS 2)

Proyecto de **Simulación de Sistemas Robóticos** que implementa una arquitectura distribuida en ROS 2 Jazzy para el monitoreo energético por sectores, ajuste dinámico de parámetros, consulta síncrona de estado mediante servicios y conmutación escalonada de transformadores barriales mediante acciones con retroalimentación.

---

## 1. Arquitectura y Estructura del Proyecto

El espacio de trabajo se encuentra dentro de la carpeta `proyecto/` y contiene dos paquetes principales:

* **`proyecto/src/planta_interfaces/`** (`ament_cmake`): Define las interfaces personalizadas de comunicación:
  * `msg/MedicionElectrica.msg`: Contiene `voltaje`, `corriente` y `potencia` instantánea.
  * `msg/SectorInfo.msg`: Mensaje anidado que agrupa `nombre_sector`, `estado` booleano y `medicion` (`MedicionElectrica`).
  * `srv/ObtenerSectores.srv`: Servicio para consultar el estado operativo de los sectores, el balance energético y el estado de los transformadores.
  * `action/GestionCarga.action`: Acción para la conexión/desconexión escalonada de transformadores (`G: 50 W`, `M: 30 W`, `P: 20 W`) con reporte de estabilidad como *feedback*.
* **`proyecto/src/ejecutable/`** (`ament_python`): Contiene la lógica de los nodos y el lanzador:
  * `ejecutable/planta.py`: Nodo central suscriptor (`/info_sectores`), servidor y cliente de acción (`/gestionar_carga`), servidor de servicio (`/mostrar_sectores`) y publicador de órdenes de aceptación o deslastre (`/comando_sector`).
  * `ejecutable/sectorA.py`, `sectorB.py`, `sectorC.py`: Nodos medidores por sector con parámetros dinámicos (`voltaje`, `corriente`, `estado`).
  * `launch/microred.launch.py`: Archivo de lanzamiento simultáneo de toda la micro-red.

---

## 2. Requisitos Previos y Dependencias

* **Sistema Operativo:** Ubuntu 24.04 LTS
* **Distribución ROS 2:** ROS 2 Jazzy Jalisco
* **Paquetes del sistema necesarios:**
  ```bash
  sudo apt update
  sudo apt install -y python3-colcon-common-extensions python3-rosdep ros-jazzy-rqt-graph
  ```

---

## 3. Clonación, Instalación de Dependencias y Compilación

1. **Clonar el repositorio e ingresar al workspace:**
   ```bash
   git clone https://github.com/angus2307/proyecto.git
   cd SSR/proyecto
   ```

2. **Cargar el entorno base de ROS 2:**
   ```bash
   source /opt/ros/jazzy/setup.bash
   ```

3. **Instalar dependencias declaradas en los `package.xml`:**
   ```bash
   rosdep update
   rosdep install --from-paths src --ignore-src -r -y
   ```

4. **Compilar los paquetes (`planta_interfaces` y `ejecutable`):**
   ```bash
   colcon build --packages-select planta_interfaces ejecutable
   source install/setup.bash
   ```

---

## 4. Ejecución del Sistema y Pruebas Funcionales

Para operar y validar el sistema se requieren **dos ventanas de terminal** ubicadas en `SSR/proyecto` (con `source install/setup.bash` ejecutado en ambas).

### Terminal 1: Lanzar todos los nodos de la micro-red
Ejecuta el archivo `launch` para iniciar simultáneamente `planta`, `sectorA`, `sectorB` y `sectorC`:
```bash
ros2 launch ejecutable microred.launch.py
```
* **Condiciones iniciales por defecto:**
  * Generación base de la planta: `100.0 W` (transformadores `G=50 W`, `M=30 W`, `P=20 W` apagados; capacidad máxima total: `200.0 W`).
  * `Sector A`: `12.0 V`, `2.5 A` (`30.0 W`) — `estado: True`.
  * `Sector B`: `24.0 V`, `1.5 A` (`36.0 W`) — `estado: True`.
  * `Sector C`: `48.0 V`, `3.0 A` (`144.0 W`) — `estado: False` (inactivo inicialmente).

---

### Terminal 2: Comandos de Consulta, Pruebas de Carga y Visualización

Abre una segunda terminal, entra a `SSR/proyecto` y carga el entorno:
```bash
cd ~/Desktop/SSR/proyecto
source /opt/ros/jazzy/setup.bash
source install/setup.bash
```

#### A. Visualizar la arquitectura de nodos y tópicos (`rqt_graph`)
```bash
rqt_graph
```
*(Muestra la comunicación en tiempo real entre `/sectorA`, `/sectorB`, `/sectorC` y `/planta` a través de `/info_sectores`, `/comando_sector` y la acción `/gestionar_carga`).*

#### B. Consultar el estado de sectores y transformadores (Servicio)
```bash
ros2 service call /mostrar_sectores planta_interfaces/srv/ObtenerSectores
```
Devuelve el voltaje, corriente, potencia y estado de cada sector, además del estado (`ACTIVADO` / `DESACTIVADO`) de los transformadores `G`, `M` y `P` y el balance de generación vs. demanda.

#### C. Prueba 1: Aumento de demanda cubierto por transformadores (Restablecimiento exitoso)
Incrementa la corriente del `Sector A` para superar los `100.0 W` base sin exceder la capacidad máxima de `200.0 W`:
```bash
ros2 param set /sectorA corriente 6.0
```
* **Comportamiento esperado:** La demanda total sube a `108.0 W`. La planta detecta el déficit, dispara la acción `/gestionar_carga`, enciende el transformador `P (20 W)` alcanzando `120.0 W` y envía la confirmación `ACEPTADO (Activo)` al `Sector A`.

#### D. Prueba 2: Sobrecarga y Deslastre de Carga (Fallo controlado)
Activa el `Sector C` (`144.0 W`) mediante parámetros dinámicos para provocar un déficit superior a la capacidad instalada:
```bash
ros2 param set /sectorC estado true
```
* **Comportamiento esperado:** La demanda total supera los `200.0 W` máximos de la planta. La acción `/gestionar_carga` conecta escalonadamente los transformadores `G (50 W)`, `M (30 W)` y `P (20 W)` reportando *feedback* en cada paso; al verificar que la generación máxima (`200.0 W`) no cubre la demanda, emite el resultado `FALLIDO` y envía la orden de deslastre (`estado = False`) al `Sector C`.

#### E. Prueba 3: Desconexión automática por excedente de energía (> 20 W)
Reduce nuevamente la demanda del `Sector A` para generar un excedente superior a `20.0 W`:
```bash
ros2 param set /sectorA corriente 1.0
```
* **Comportamiento esperado:** La planta detecta un excedente mayor a `20.0 W` y apaga automáticamente los transformadores innecesarios sin dejar caer la generación por debajo de la demanda activa.
