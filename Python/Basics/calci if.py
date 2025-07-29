a = int(input("\nEnter Number\t"))
z = input("Operator\t")
b = int(input("Enter Number\t"))


# if(z == 1):
#     print(a+b)
# elif(z == 2):
#     print(a-b)
# elif(z == 3):
#     print(a*b)
# elif(z==4):
#     print(a/b)
# else:
#     print("Out of range")
match z:
    case '+':
        print(a+b)
    case '-':
        print(a-b)
    case '*':
        print(a*b)
    case '/':
        print(a/b)
    case _:
        print("Invalid Selection\n")