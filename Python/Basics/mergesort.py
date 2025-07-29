def merge(a,low,mid,high):
    b = []
    i = low
    j = high
    while(i <= high or j >= low):
        if(a[i] < a[j] and i <= high):
            b.append(a[i])
            i+=1
        if(a[j] < a[i] and j >= low):
            b.append(a[j])
            j-=1
        while(i <= high):
            b.append(a[i])
            i+=1
        while(j>=low):
            b.append(a[j])
            j-=1
    for i in range(0,len(b)-1):
        element = b[i]
        a.append(element)



def mergesort(a, low, high):
    if(low<high):
        mid = (low+high)//2
        mergesort(a,low,mid)
        mergesort(a,mid+1,high)
        merge(a,low,mid,high)
a = [12,34,32,35,78,54,23]
mergesort(a, 0, len(a)-1)