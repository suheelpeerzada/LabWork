#constructor

class Person:
    def __init__(self, n, o):
        print("HI mY Name is EmInEm")
        self.name = n
        self.occ = o

    def info(self): #self replaces w calling object
        print(f"{self.name} is a {self.occ}")

a = Person("Suheel", "Software Engineer") #create object
b = Person("Afreen", "IAS")

a.info() #calling using object
b.info()