# items = ['black', 'yellow', 'red']
# indexedItems = enumerate(items)
#
# for i, item in indexedItems:
#     print(i, item)
#     indexedItems[i] = 'black'
from functools import reduce


# === Генератори списку ===
# Працюють швидше за цикл for

# arr1 = [ ((i + 1), (i + 2)) for i in range(10)]
# print(arr1)
# print()

# Генератор з умовою

# arr2 = [i for i in range(10) if i % 2 == 0]
# print(arr2)
# print()

# arr3 = [[14, 102], [1, -32], [5, 77]]
# arr4 = [j for i in arr3 for j in i if j > 10]
# print(arr4)
# print()

# = Вираз-генератор =
# Діє як ітератор, а не список
# Розпаковується тільки один раз! Другий прохід працювати не буде

# arr5 = list(range(0, 15, 2))
# j = (i for i in arr5)
# for i in j:
#     print(i, end=", ")
#
# for i in j:
#     print(i, end=", ") # не працює
#
# j = (i for i in arr5)
# print(list(j))

# === Функція map() ===============
# map(<Посилання на функцію>, <Послідовність1>, [..., <ПослідовністьN>])
# Повертає ітератор

# def func(elem):
#     return elem * 2
#
# j = map(func, range(5))
# print(list(j))
# => [0, 2, 4, 6, 8]

# Розпаковщики: list(), set(), tuple(), sum(), ...

# Обробка елементів списків на однаковому зсуві:
# def multiply(a, b, c):
#     return (a, b, c, a * b * c)
#
# print(list(map(multiply, range(0, 10, 2), range(5), range(0, 15, 3))))

# Якщо елементів у параметрах різна кількість, то map() працює, допоки існує зсув у всіх послідовностях:
# def divide(a, b):
#     return a / b

# print(list(map(divide, range(1, 10, 2), range(1, 15, 2))))

# === Функція zip() ===
# На кожній ітерації повертає кортеж, який містить елементи, розташовані на одному зсуві
# zip(<Послідовність1>, ..., <ПослідовністьN>)

# a = [5, 13, -21]
# b = [6, 3, 2]
# c = [1, 10, 100]
# zipped = zip(a, b, c)
#
# for i in zipped:
#     print(i, sum(i))

# Якщо елементів у параметрах різна кількість, то zip() працює, допоки існує зсув у всіх послідовностях:

# === filter() ==========
# Повертає відфільтрований список за функцією-фільтром, або, за його відсутності (None), за логічним контекстом елемента:
# def invert(a):
#     return not a

# arr = [1, "", True, False, 'asd', 0]
# print(list(filter(None, arr)))
# print(list(filter(invert, arr)))
# >>> [1, True, 'asd']
# >>> ['', False, 0]

# === reduce(<Callback>, <Послідовність>, <Початкове значення>) ========
# Акумулює значення, передаючи результат минулого виклику в наступний.

def func(x, y):
    return x + y

arr = [5, 1234, 12, 10, 100]

print(reduce(func, arr, 1000000))