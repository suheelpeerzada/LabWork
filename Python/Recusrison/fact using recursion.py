#fact using recursion

def fact(n):
    if n == 1:
        return 1
    else:
        facto = n * fact(n-1)
        return facto

n = int(input("Enter number"))
print(fact(n))