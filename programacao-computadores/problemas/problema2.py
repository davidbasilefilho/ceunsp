try:
    a = float(input("a: "))
except ValueError:
    print('O valor digitado não é um número.')
    exit()

try: 
    b = float(input("b: "))
except ValueError:
    print('O valor digitado não é um número.')
    exit()

try:
    c = float(input("c: "))
except ValueError:
    print('O valor digitado não é um número.')
    exit()


delta = b ** 2 - 4 * a * c

x1 = (-b - delta ** 0.5) / 2 * a
x2 = (-b + delta ** 0.5) / 2 * a

print(f"x1: {x1}")
print(f"x2: {x2}")
