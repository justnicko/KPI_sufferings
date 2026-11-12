a = float(input("Введіть довільне а: "))
b = float(input("Введіть довільне b: "))

sumOfSquared = a ** 2 + b ** 2
squareOfSum = (a + b) ** 2

print("Сума квадратів a, b: ", sumOfSquared)
print("Квадрат суми a, b: ", squareOfSum)

if sumOfSquared > squareOfSum:
    print("Сума квадратів більша за квадрат суми")
elif sumOfSquared < squareOfSum:
    print("Квадрат суми більше за суму квадратів")
else:
    print("Квадрат суми дорівнює сумі квадратів")