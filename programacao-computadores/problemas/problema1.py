try:
    t = float(input("Tempo percorrido em horas: "))
except ValueError:
    print("Digite um número válido")
    exit()

try:
    vm = float(input("Velocidade média em Km/h: "))
except ValueError:
    print("Digite um número válido")
    exit()

try:
    autonomia = float(input("Autonomia do veículo em Km/L: "))
except ValueError:
    print("Digite um número válido")
    exit()

d = t * vm
print(f"O consumo total é igual a {(d / autonomia):.2f} litros")
