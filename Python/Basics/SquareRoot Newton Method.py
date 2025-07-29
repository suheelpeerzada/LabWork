def newtonRoot(n,l):
    x=n
    count = 0
    while(True):
        count+=1

        root = 0.5*(x+(n/x))
        if(abs(root - x) < l):
            break
        x = root
    return root
n = 3
l = 0.00001
print(newtonRoot(n,l))