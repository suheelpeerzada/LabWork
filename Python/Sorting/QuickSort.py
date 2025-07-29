def quickSort(a, low, high):
    if(low<high):
        pivot = a[low]
        i = low
        j = high
        while(True):
            while(pivot > a[i] and a[i] < high):
                i+=1
            while(pivot < a[j] and a[j] > low):
                j-=1
            if(i > j):
                t = a[j]
                a[j] = a[i]
                a[i] = t
            else: break
        a[low] = a[j]
        a[j] = pivot
        quickSort(a,low,j-1)
        quickSort(a,j+1, high)

a = [32,1,34,56,8,6,4,3,43]
print("Before:")
print(a)
quickSort(a, 0, len(a)-1)
print("After:")
print(a)