import random as rd

print("Welcome! lets play stone paper scissors!")

print("Enter")
while True:
    a = int(input("1: Stone\n2: Paper\n3: Scissors\n0: Exit\n"))
    b = rd.randint(1,3)
    if(a==0):
        break
    elif(a==b):
        print("Draw, computer also chose Stone!\n")
    elif(a==1 and b==2):
        print("You lose, computer chose Paper!\n")
    elif(a==1 and b==3):
        print("You win, computer chose Scissors\n")
    elif(a==2 and b==1):
        print("You win, computer chose Stone\n")
    elif(a==2 and b==3):
        print("You lose, computer chose Scissors!\n")
    elif(a==3 and b==1):
        print("You lose, computer chose Stone!\n")
    elif(a==3 and b==2):
        print("You win, computer chose Paper\n")
    else:
        print("Invalid Input!")
        break