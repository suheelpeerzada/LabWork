#call by reference
def fun1(li):
    print("After passing List: ", li)
    li.append(4)
    li.append(6)
    print(li)
li = [1,2]
print("before passing: ", li)
fun1(li)