#  Модулі

# Усі програми, які ми запускаємо,
# розташовані в __main__

# __name__ - атрибут імені модуля
print(__name__)

import random
print(random.__name__)
print('===================')


# Перевірка способу запуску модуля:
if __name__ == '__main__':
    print('це головна програма')
else:
    print("модуль")
print('===================')


# Ондочасне імпортування одн. інструкцією:
import time, math
print(time.strftime("%d %m %y"))
print(math.pi)
print('===================')

# getattr()
# getattr(<module>, <"attribute">[,<"default val">])
a = getattr(math, 'pi', 3.14)
print(a)

b = ['pi', 'e', 'hat']
for i in b:
    print(getattr(math, i, "doesn't exist"))
print('===================')

# Псевдоніми модуля
import random as r

print(r.randint(1, 100))
print('===================')

# Урахування глоб. областей видимості
# from math import * - дозволяє імпортувати з модуля
# всі ідентифікатори
# Якщо імпортувати декілька модулів таким чином,
# і один атрибут присутній в обох модулях,
# то повернеться атрибут останнього імпортованого

# Скомпільовані файли Python
import compileall
print(compileall.compile_dir('D:\Averchenko\Програмування\Lab4'))
print('===================')

# Динамічне завантаження
m = __import__("math")
print(m.pi)
print('===================')

# Інструкція from
from math import pi, floor as f
print(pi)
print(f(4.12))
print('===================')

# код виходу:
from sys import exit
while True:
    a = input('exit code: ')
    if a.isdigit: exit(int(a))