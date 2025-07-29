import random as rd
def encode():
    f = rd.choices(alpha,k=3)
    l = rd.choices(alpha, k=3)

    b = []
    i = len(a)-1
    if len(a) < 3:
        while(i>=0):
            b.append(a[i])
            i=i-1
    else:
        b = b+f
        for i in range(1,len(a)):
            b.append(a[i])
        b.append(a[0])
        b = b+l
    return b

def decode():
    b = []
    c = []
    for j in a:
        i = len(a)-1
        if len(j) < 3:
            while(i>=0):
                b.append(a[i])
                i=i-1
        else:
            for i in range(3,-3):
                b.append(a[i])
            # c[0] = b[len(b)-1]
            # for i in range(len(b)-1):
            #     c[i+1]= b[i]
    return b



alpha = []
for i in range(97, 123):
    alpha.append(chr(i))
# print(alpha)
while(True):
    choice = int(input("1. Encode\n2. Decode\n"))
    a = input("Enter word\n")
    match(choice):
        case 1:
            print(str(encode()))
        case 2:
            print(str(decode()))
