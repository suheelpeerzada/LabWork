#oops and self

class Person:
    name = "Suheel"
    occ = "Software developer"

    def info(self): #self replaces w calling object
        print(f"{self.name} is a {self.occ}")

a = Person() #create object

a.name = "Adnan"
a.occ = "Data Analyst"

a.info() #calling using object