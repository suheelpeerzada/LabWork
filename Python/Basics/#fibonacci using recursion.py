#fibonacci using recursion
# 0 1 1 2 3 5 8
# 5
def fibo(x , a, b):
    if(x == 0):
        return 0
    else:
        c = a+b
        print(c)
        return fibo(x-1, b, c)


x = int(input("Enter no of digits"))
a = 0
b = 1
print(a)
print(b)
fibo(x-2,a,b)