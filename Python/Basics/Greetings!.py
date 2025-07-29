import time
a = int(time.strftime('%H'))
print(a)
if(a>=5 and a < 12):
    print("Good Morning")
elif(a==12):
    print("Afternoon!")
elif(a>12 and a<=17):
    print("Good Afternoon")
elif(a>17 and a<20):
    print("Good Evening")
else:
    print("Goodnight")
