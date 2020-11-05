import sys


for line in sys.stdin:
    dice = list(line.split())
    if (dice[0] > dice[1]):
        dice1 = int(dice[0]) * 10 + int(dice[1])
    else:
        dice1 = int(dice[1]) * 10 + int(dice[0])
    if (dice[2] > dice[3]):
        dice2 = int(dice[2]) * 10 + int(dice[3])
    else:
        dice2 = int(dice[3]) * 10 + int(dice[2])

    if (dice1 == 0 and dice2 == 0):
        break
    elif (dice1 == dice2):
        print("Tie.")
    elif(dice1 == 21):
        print("Player 1 wins.")
    elif(dice2 == 21):
        print("Player 2 wins.")
    elif(dice1%11 ==0):
        if (dice2%11==0):
            if (dice1 > dice2):
                print("Player 1 wins.")
            else:
                print("Player 2 wins.")
        else:
            print("Player 1 wins.")
    elif(dice2%11==0):
        print("Player 2 wins.")
    elif(dice1 > dice2):
        print("Player 1 wins.")
    else:
        print("Player 2 wins.")





