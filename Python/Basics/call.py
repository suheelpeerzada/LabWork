#call by value / reference
def func1(x, y):
    print(x+y)


func1(5,10) 
a = 20
b = 10
func1(a,b)