def calculate(side):
    return side*side

def calculate(len, breadth):
    return len*breadth

choice = int(input("1: for square\n2: for rect"))
match choice:
    case 1:
        side = int(input("Enter side:\t"))
        print(calculate(side))
    case 2:
        len = int(input("Enter length:"))
        breadth = int(input("Enter breadth:"))
        print(calculate(len, breadth))