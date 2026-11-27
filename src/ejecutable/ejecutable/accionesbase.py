tg = True
tm = False
tp = False

potenciaR = 40     # requerida
potenciaGe = 40      # generada

transformadorG = 50
transformadorM = 30
transformadorP = 20

while potenciaGe < potenciaR:

    deficit = potenciaR - potenciaGe

    opciones = []

    if not tg:
        opciones.append(("G", abs(deficit - transformadorG)))

    if not tm:
        opciones.append(("M", abs(deficit - transformadorM)))

    if not tp:
        opciones.append(("P", abs(deficit - transformadorP)))

    if len(opciones) == 0:
        break

    mejor = min(opciones, key=lambda x: x[1])

    if mejor[0] == "G":
        tg = True
        potenciaGe += transformadorG
        print(f"Se activó transformador de 50 kW, potencia actual de {potenciaGe} kW")

    elif mejor[0] == "M":
        tm = True
        potenciaGe += transformadorM
        print(f"Se activó transformador de 30 kW, potencia actual de {potenciaGe} kW")

    elif mejor[0] == "P":
        tp = True
        potenciaGe += transformadorP
        print(f"Se activó transformador de 20 kW, potencia actual de {potenciaGe} kW")

while potenciaGe+transformadorP > potenciaR:

    surplus = potenciaR - potenciaGe

    opciones = []

    if  tg :
        opciones.append(("G", abs(surplus - transformadorG)))

    if  tm:
        opciones.append(("M", abs(surplus - transformadorM)))

    if  tp:
        opciones.append(("P", abs(surplus - transformadorP)))

    if len(opciones) == 0:
        break

    mejor = min(opciones, key=lambda x: x[1])

    if mejor[0] == "G":
        tg = False
        potenciaGe -= transformadorG
        print(f"Se desactivó  transformador de 50 kW, potencia actual de {potenciaGe} kW")

    elif mejor[0] == "M":
        tm = False
        potenciaGe -= transformadorM
        print(f"Se desactivó transformador de 30 kW, potencia actual de {potenciaGe} kW")

    elif mejor[0] == "P":
        tp = False
        potenciaGe -= transformadorP
        print(f"Se desactivó  transformador de 20 kW, potencia actual de {potenciaGe} kW")
    print(surplus)


if potenciaGe >= potenciaR:
    print("Restablecimiento completado")

else:
    print("No fue posible cubrir la demanda")