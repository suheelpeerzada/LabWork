a = 10
b = a
print(a, b)
b = 0
print(a , b)

li = [0,8,7]

li1 = li
print(li , li1)
for i in range(len(li1)):
    li1[i] = 0
print(li , li1)