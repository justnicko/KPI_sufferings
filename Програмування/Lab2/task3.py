a = int(input("Введіть ціле число a: "))
b = int(input("Введіть ціле число b (b > a): "))

if b <= a:
    print("b повинно бути більше a")
else:
    numbersBetween = range(a, b + 1)
    N = len(numbersBetween)

    print("Числа між a та b:", end=" ")

    for i in numbersBetween:
        print(i, end=", ")

    print()
    print("Кількість чисел", N)

# and or
# & |