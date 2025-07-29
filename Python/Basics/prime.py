num = 100
for i in range(2, num):
    for e in range(2,i):
        if(i%e==0):
            break
    else:
        print(i)