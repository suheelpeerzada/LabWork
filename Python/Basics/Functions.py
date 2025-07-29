import math
def arearect(a,b):
    area = a*b
    print("Area is: ", area)
def areasqr(a):
    area = a*4
    print("Area of square is: ", area)
def circ(a):
    cir = math.pi * a * a
    print("Area of circle is: ", cir)

i = int(input("1: Area of rectangle\n2: Area of circle\n"))
match i:
    case 1:
        a = int(input("Enter Length"))
        b = int(input("Enter Breadth"))
        if(a==b):
            areasqr(a)
        else:
            arearect(a,b)
    case 2:
        a = float(input("Enter Radius"))
        circ(a)
    case _:
        print("Invalid option selected!")