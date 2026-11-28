tg = False
tm = False
tp = False

potenciaR = 130      # requerida
potenciaGe = 100    

transformadorG = 50
transformadorM = 30
transformadorP = 20
if tg:
    potenciaGe += transformadorG
if tm:
    potenciaGe += transformadorM
if tp:
    potenciaGe += transformadorP
# 1. ENCENDER transformadores si falta potencia

while potenciaGe < potenciaR:
    print(f"insuficiencia detectada : se producen {potenciaGe} kW y se necesitan {potenciaR} kW")

    deficit = potenciaR - potenciaGe
    opciones = []

    if not tg:
        opciones.append(("G", abs(deficit - transformadorG)))
    if not tm:
        opciones.append(("M", abs(deficit - transformadorM)))
    if not tp:
        opciones.append(("P", abs(deficit - transformadorP)))

    if not opciones:
        break

    mejor = min(opciones, key=lambda x: x[1])

    if mejor[0] == "G":
        tg = True
        potenciaGe += transformadorG
        print(f"Se activó transformador de 50 kW, potencia actual: {potenciaGe} kW")
    elif mejor[0] == "M":
        tm = True
        potenciaGe += transformadorM
        print(f"Se activó transformador de 30 kW, potencia actual: {potenciaGe} kW")
    elif mejor[0] == "P":
        tp = True
        potenciaGe += transformadorP
        print(f"Se activó transformador de 20 kW, potencia actual: {potenciaGe} kW")

# 2. APAGAR transformadores si hay un extra > 20 kW sin bajar de potenciaR
while (potenciaGe - potenciaR) > 20:
    print(f"Sobreuso de transformadores detectado: se producen {potenciaGe} kW y se necesitan {potenciaR} kW")

    excedente = potenciaGe - potenciaR
    opciones = []

    # Solo agregamos como opción los transformadores que están encendidos
    # Y que al apagarlos NO nos dejen por debajo de potenciaR (transformador <= excedente)
    if tg and transformadorG <= excedente:
        opciones.append(("G", excedente - transformadorG))
    if tm and transformadorM <= excedente:
        opciones.append(("M", excedente - transformadorM))
    if tp and transformadorP <= excedente:
        opciones.append(("P", excedente - transformadorP))

    # Si ningún transformador encendido se puede apagar sin bajar de potenciaR, salimos
    if not opciones:
        break

    # Elegimos el transformador más grande posible dentro del excedente (menor sobrante restante)
    mejor = min(opciones, key=lambda x: x[1])

    if mejor[0] == "G":
        tg = False
        potenciaGe -= transformadorG
        print(f"Se desactivó transformador de 50 kW, potencia actual: {potenciaGe} kW")
    elif mejor[0] == "M":
        tm = False
        potenciaGe -= transformadorM
        print(f"Se desactivó transformador de 30 kW, potencia actual: {potenciaGe} kW")
    elif mejor[0] == "P":
        tp = False
        potenciaGe -= transformadorP
        print(f"Se desactivó transformador de 20 kW, potencia actual: {potenciaGe} kW")

if potenciaGe >= potenciaR:
    print(f"Restablecimiento completado (Generada: {potenciaGe} kW / Requerida: {potenciaR} kW)")
else:
    print("No fue posible cubrir la demanda")
