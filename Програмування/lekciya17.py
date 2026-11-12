# Функції (продовження)

# Збереження іменнованих параметрів у словнику

def toDict(**d):
    print(d)
    return d

a = toDict(a = 1, b = 2)

# Поєднання обов'язкових параметрів з двозірковими

def dicmix(multiplier = 1, **b):
    for k in b:
        b[k] *= multiplier
    return b

print(dicmix(3, a = 9, b = 10))

# Комбінування * та **

def func(*t, **d):
    print(t)
    print(d)

print(func(1, "str", False, a = 2, c = 11, b = 3))
print(func(10))

# Поєднання обов'язкових параметрів з зірковими

def func(g, m=2, *t, **d):
    print(g)
    print(m)
    print(t)
    print(d)

func(35, 19, 12, 20, a = 9, b = a)

# Параметри між зірковими парамаетрами мають
# бути іменованими

def func(*t, g, m=2, **d):
    print(t)
    print(g)
    print(m)
    print(d)

func(10, 20, 30, 40, g = 1, a = 10, l = 'gg')

# Випадок, коли необхідно, щоб деякі параметри
# передавався по імені

def func(a = 1, y = 10, *, b, f):
    print(f"a = {a}, b = {b}, y = {y}")

func(32, 9, f = 5, b = 4)
# func(32, 10, 4) не спрацює, третій - не іменований

# Анонімні функції

f = lambda x: x + 10
print(type(f), f(10))

# ! Визначення анон. функції повертає посилання на
# об'єкт-функцію, яку можна зберегти в змінній або
# передати як параметр в іншу функцію

s = [12, 0, -12, 4, 255, 256]
s.sort(key = lambda x: -x)
print(s)

s2 = [[1, 123, 11], [9, 9, 9], [122]]
print(list(map(lambda *d: sum(*d), s2)))

# Функції-генератори
# Використовуються лише як ітератор

def func(x, y):
    for i in range(x):
        yield i ** y

for n in func(11, 2):
    print(n, end = " ")
print()

# Виклик однієї функції-генератора з іншої

def gen(*b):
    for k in b:
        print()
        yield from range(k)

for i in gen(5, 10, 15): print(i, end = ' ')

# Декоратори функцій