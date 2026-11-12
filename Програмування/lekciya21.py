# ООП в python

# Класи
class MyClass:
    pass

mc = MyClass()
print(type(mc))

# class оператор класу
# class <Назва>[(<Базові класи>)]:
#   ["""<Рядок документування>"""]
#   [<Опис атрибутів>]
#   [<Опис методів>]

# Функції мають обо'язковий параметр self

# Інструкції у тілі класу виконуються одразу

# Стандартні атрибути:
print(MyClass.__doc__)
print(MyClass.__class__)
print(MyClass.__name__)
print(MyClass.__weakref__)
print(MyClass.__dict__)

# Атрибути та методи класу
class Foo:
    myattribute = 12
    def mymethod(self):
        if self is d:
            print("Доступ до об'єкта d")

d = Foo()
d.mymethod()

# Використання методу __init__()
# Викликається при створенні екземпляра класу
class MyVector:
    def __init__(self, value1, value2):
        print(self)
        self.x = value1
        self.y = value2

v = MyVector(10, 30)
print(v.x, v.y)

# Подібні методи, які викликаються без явного виклику
# в пайтоні називаются магічними
# Інший магічний метод: __del__() - викликається при видаленні об'єкта
# __new__() - викликається перед __init__() при створенні об'єкта.

class Boo:
    def __init__(self, name):
        self.name = name

    def __del__(self):
        print("Видаляється ", self.name)

b = Boo("biba")
c = Boo("boba")
c = b # боба видалиться при втраті посилання на нього
print(c.name)