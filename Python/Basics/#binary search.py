#binary search

def binarySearch(a, x, low, high):
    if(low<high):
        mid = (low+high) // 2
        if(a[mid] == x):
            return mid
        elif(a[mid] < x):
            return binarySearch(a, x, mid+1, high)
        elif(a[mid] > x):
            return binarySearch(a, x, low, mid)
    else: return -1
a = [5,10,20,25,30,35,40,50,90]
# for i in range(0,10):
#     element = int(input("Enter element: "))
#     a.append(element)
print(a)
a.sort()
x = 30
print(binarySearch(a, x, 0, len(a)-1))