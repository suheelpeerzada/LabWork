num = int(input("Enter num"))
for i in range(2, num):
    for z in range(2, i):
            if(i%z==0):
                break
    else:
            print(i)