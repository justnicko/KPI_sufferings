# Функції python
def sumfunc(x, y):
    return x + y

x = 20
y = 45
z = x + y
print(z)
print(sumfunc(x, y))

# У функції не перевіряється тип параметра
def suma(x, y):
    return x + y
print(suma('str','ing'))
print(suma([1, 2], [3, 4]))

# Посилання на функцію
def suma(x, y):
    return x + y

fn = suma
del suma
v = fn(10, 20)
print(f"10 + 20 = {v}")

# Атрибути функцій
def multiply(a, b):
    """Множення двох чисел"""
    return a * b

print(f"Ім'я фукнції: {multiply.__name__}")
print(f"Документація: {multiply.__doc__}")
print(f"Модуль, де знаходиться: {multiply.__module__}")

# Визначення функції повинно
# бути розташоване перед викликом функції
# Зазвичай, в перших рядках програми

# Кілька функцій з однією змінною
n = input()
if (n == '1'):
    def echo():
        print("You entered 1;")
else:
    def echo():
        print(f"Alternative function;")
echo()

# Необов'язкові параметри й зіставлення по ключах
# Деякі параметри можна зробити необов'язковими.
# Тоді у визначенні ф-ції можна присвоїти їм
# поч. значення.
# Необов'язкові йдуть після обов'язкових
def suma(x, y, z = 2):
    return x + y + z
print(f"suma(10, 20): {suma(10, 20)}")
print(f"suma(10, 20, 0): {suma(10, 20, 0)}")

# Передача параметів зіставленням по ключам
def forcalc(x, y, z):
    print('x =', x, 'y =', y, 'z = ', z)
    return x * y + z
print(forcalc(z = 3, y = 2, x = 1))

# Розпакування списку або кортежу
def forcalc(x, y, z):
    print('x =', x, 'y =', y, 'z = ', z)
    return x * y + z
t1 = (5, 10, 15)
t2 = [23, 34]
print(forcalc(*t1))
print(forcalc(12, *t2))
# *послідовність - розпакування послідовності

# Розпакування словників
def forcalc(x, y, z):
    print('x =', x, 'y =', y, 'z = ', z)
    return x * y + z

d1 = {'x': 3, 'y': 10, 'z': 13}
print(forcalc(**d1))

# Передача у функції незмінюванних об'єктів
# Якщо об'єкт незмінюваного типу, то зміна значення
# усередині функції не змінить їх значень поза.
# П-д: рядки, числа і т.п.

# Змінювані об'єкти - навпаки.
# П-ди: списки, словники

# Вкладені функції
def outfunc(n):
    def infunc(x):
        return x + n
    return infunc

new = outfunc(100)
print(new(200))