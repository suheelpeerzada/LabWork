class MyClass():
    def func1(self,a,b):
        print(a+b)
    def func2(self,a,b):
        print( a-b)
class yourClass(MyClass):
    def func3(self, a, b):
        print(a*b)
x = yourClass()
a = 5
b = 2
x.func1(a,b)
x.func2(a,b)
x.func3(a,b)