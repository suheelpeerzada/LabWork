a = [12,6,3,89,34,21]
i = 0
x  = int(input("Search:\t"))
while i < 5:
    if a[i] == x:
        print("Found at index:\t",i)
        break
    else:
        i+=1