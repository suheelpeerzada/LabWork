import time
s = time.time()

def dnc(f, l, x):
    if f < l:
        mid = int((f+l)/2)
        if x==a[mid]:
            return mid
        elif x<a[mid]:
            return dnc(f, mid, x)
        elif x>a[mid]:
           return dnc(mid+1, l,x)
       
    else:
        return -1

a = [2] * 20000
print(a)
x  = 33
l = 7
f = 0
a.sort()
t = time.time()
print("Found at index:\t",dnc(f,l, x))
print(f"time taken {t-s}")