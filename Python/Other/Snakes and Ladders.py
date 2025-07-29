import random as rd
import time

def gameloop():
    p1 = p2 = 0
    sh = [rd.randint(30, 99) for _ in range(diff)]
    sb = [rd.randint(3, 25) for _ in range(diff)]
    lh = [rd.randint(50, 85) for _ in range(diff)]
    lb = [rd.randint(3, 60) for _ in range(diff)]
    while(p1 or p2 != 100):
        dice = rd.randint(1,6)
        print("P1 current position: " , p1)
        print("P2 current position: " , p2)
        print("Ladder: ", lb)
        print("Snake: ", sh)
        input("Player 1, Press enter to toss the dice!")
        time.sleep(1)
        if(True):
            print("Rolled:" , dice)
            if(p1+dice <= 100):
                p1+=dice
                print("P1: " , p1)
            for i in range(5):
                if(p1==sh[i]):
                    p1=sb[i]
                    print("Hit a Snake! Going back to " , sb[i])
                elif(p1==lb[i]):
                    p1=lh[i]
                    print("Found a Ladder! Going up to: " , lh[i])
        dice = rd.randint(1,6)
        if(p1==100):
            print("Player 1 wins!")
            break
        input("Player 2, Press enter to toss the dice!")
        time.sleep(1)
        if(True):
            print("Rolled:" , dice)
            if(p2+dice <= 100):
                p2+=dice
                print("P2: " , p2)
            for i in range(5):
                if(p2==sh[i]):
                    p2=sb[i]
                    print("Hit a Snake! Going back to " , sb[i])
                elif(p2==lb[i]):
                    p2=lh[i]
                    print("Found a Ladder! Going up to: " , lh[i])
        if(p2==100):
            print("Player 2 wins!")
            return
while True:
    print("Welcome to Snakes and Ladders! A two player game!")
    sel = int(input("Select Difficulty:\n1 - Easy\n2 - Medium\n3 - Hard\n"))
    match sel:
        case 1:
            diff = 5
        case 2:
            diff = 7
        case 3:
            diff = 9
        case _ :
            print("Invalid difficulty set")
            exit()
    a = int(input("Enter 1 to play\n"))
    if a==1:
        gameloop()
    else:
        exit()