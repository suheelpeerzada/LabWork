#bubble sort

def bubbleSort(a, n):
    for i in range(0,n):
        for j in range(0, n-1-i):
            if(a[j]>a[j+1]):
                a[j],a[j+1] = a[j+1],a[j]


a = [12,45,56,34,23,87,91]
n = len(a)-1
print(a)
bubbleSort(a, n)
print(a)