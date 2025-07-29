while True:
    a = int(input("Enter first element"))
    b = int(input("Enter second element"))
    c = int(input("1) Add\n2) Sub\n3) Mul\n4) Div\n5) Exit"))
    match c:
        case 1:
            print("\nSum is ", a+b)
        case 2:
            print("\nDifference is ", a-b)
        case 3:
            print("\nProduct is ", a*b)
        case 4:
            print("\nDiv is ", a/b)
        case 5:
            exit()
        case _:
            print("\nWrong Option selected")
            break