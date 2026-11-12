# Декоратори функцій

import hashlib


def my_decorator(function_to_decorate):
    def wrapper_function():
        print("Код до функції")
        function_to_decorate()
        print("Код після функції")
    return wrapper_function

# Виклик декоратора

@my_decorator
def unchangeable_function():
    print("Базова функція")

unchangeable_function()

# Другий спосіб

def unchangeable_function():
    print("Базова функція")

my_decorator(unchangeable_function)()

# Порядок виклику

def deco1(f):
    print("deco1 called")
    return f

def deco2(f):
    print("deco2 called")
    return f

@deco1
@deco2
def my_func(x):
    print(x)

my_func("func body")

# еквівалентно deco1(deco2(my_func))

# Декоратор з параметром

# saved_p = hashlib.md5(bytes('1234', 'utf-8'))

# def test_passw(p):
#     def deco(f):
#         h2 = hashlib.md5(bytes(input('Enter pass: '), 'utf-8'))
#         if (p == h2.hexdigest()):
#             return f
#         else:
#             return 
#     return deco

# @test_passw(saved_p)
# def secret_code():
#     print("secret implementation...")

# secret_code()

# Область видимості

# Глобальні змінні - оголошені поза функцією
def func(gl2):
    print("global variable gl1: ", gl1)
    gl2 += 10
    print('local gl2: ', gl2)

gl1, gl2 = 10, 5
func(77)
print('global gl2: ', gl2)

# Якщо доступ до змінної в тілі функції здійснюється
# поза нею, то виникне помилка UnboundLocalError

# Доступ до змінної до присвоєння значення також
# викличе помилку

# Глобальна змінна у функції

def func():
    global gl1
    gl1 = 25

gl1 = 10
func()
print(gl1)

# Також глобальні змінні можна створити через лямбду
# Причому лямбда-функція поверне посилання

def func(x):
    x = 25

gl1 = 10
func(lambda: gl1)
print(gl1)

# ! Передивитись використання лямбд 18 лекція область фидимості

# globals(), locals() - повертають змінні відповідно
# до власного середовища

# Вкладені функції. Змінні верхнів рівнів у нижніх

def func1(b):
    def func2():
        c = 3
        print(a, b, c, sep=", ")
    return func2

a = 1
f1 = func1(10)
f1()

# nonlocal - доступ до локальної змінної функції-предка