def merge(a, low, mid, high):
    i = low
    j = mid+1
    b = []
    while i<= mid and j<= high:
        if a[i] < a[j]:
            x = a[i]
            b.append(x)
            i+=1
        else:
            x = a[j]
            b.append(x)
            j+=1
    while i<=mid:
        x = a[i]
        b.append(x)
        i+=1
    while j<= high :
        x = a[j]
        b.append(x)
        j+=1
    a[low:high+1] = b

def mergeSort(a, low, high):
    if low<high :
        mid = (low+high)//2

        mergeSort(a, low,mid)
        mergeSort(a, mid+1, high)
        merge(a, low, mid, high)

a = [65,3,276,87,5,5443,4,56,67,7687,21,45,6,78]
mergeSort(a, 0 , len(a)-1)
print(a)