import math

x = float(input("Введіть змінну x: "))
y = float(input("Введіть змінну y: "))

if (3.8 * x + y) > 0 and (3.8 * x + y) != 1:
    R = ((math.e ** (2 * x) + math.sin(y))
        / (math.log(3.8 * x + y, math.e)))
else:
    R = "Вираз неможливо обчислити для заданих значень"

print(R)