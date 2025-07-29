def fibo(x,a,b):
    if x==0:
        return
    c = a+b
    print(c)
    fibo(x-1,b,c)

a = 0
b = 1
x = int(input("Enter number of iterations:"))
print(a)
print(b)
fibo(x-2,a,b)
