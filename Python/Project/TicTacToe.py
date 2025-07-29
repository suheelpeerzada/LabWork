import numpy as np
import random as rd

board = np.full((3,3), " ")
gameover = 0
x = 1
l1 = list()

def victory(winner):
    global gameover
    if(winner == 1):
        print("Congratulations!!!")
        print("You won the game!!")
    elif(winner == 0):
        print("Better Luck next time!")
        print("CPU won the game!!")
    gameover = 1
    

def checkwinner():
    global gameover
    for symbol in ['X', 'O']:
        if(board[0,0] == board[0,1] == board[0,2] == symbol or
            board[1,0] == board[1,1] == board[1,2] == symbol or
            board[2,0] == board[2,1] == board[2,2] == symbol or
            board[0,0] == board[1,0] == board[2,0] == symbol or
            board[0,1] == board[1,1] == board[2,1] == symbol or
            board[0,2] == board[1,2] == board[2,2] == symbol or
            board[0,0] == board[1,1] == board[2,2] == symbol or
            board[0,2] == board[1,1] == board[2,0] == symbol):
                gameover = 1
                if(symbol == 'X'):
                    victory(1)
                else:
                    victory(0)


def playerTurn():
    print("Your Turn")
    n = int(input("Enter place:\t"))
    if(n not in l1):
        l1.append(n)
        row = int(n/3)
        column = int(n%3)
        board[row,column] = 'X'
        print(board)
    else:
        print("Invalid choice entered!")
        return playerTurn()
    checkwinner()

def cpuTurn():
    cpu = 1
    print("Cpu's Turn, please wait!")
    while(cpu):
        n = rd.randint(0,8)
        if n not in l1:
            cpu = 0
            l1.append(n)
            row = int(n/3)
            column = int(n%3)
            board[row,column] = 'O'
            print(board)
    checkwinner()


print("Welcome to TicTacToe!!! (3x3 board)")
print("")

turn = rd.choice([0,1])
while(x < 10):
    x+=1
    if(gameover == 1):
        break
    if(turn == 1):
        turn = 0
        playerTurn()
    else:
        turn = 1
        cpuTurn()