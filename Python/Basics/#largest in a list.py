a = [12,43,3,563,32,78,3453]
largest = a[0]
i = 1
while(i<len(a)):
    if(largest < a[i]):
        largest = a[i]
    i+=1
print("Largest element is:" , largest)