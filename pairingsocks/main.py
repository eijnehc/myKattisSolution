n = int(input())

oPile = list(map(int, input().split()))

oPile.reverse()

aPile = []
impossible = False

#default minimum one move is needed
moves = 0

while True:
    #if both empty break
    if (len(aPile) == 0 and len(oPile) == 0):
        break
    elif (len(aPile) != 0 and len(oPile) != 0):
        if (aPile[-1] == oPile[-1]):
            aPile.pop()
            oPile.pop()
            # print(aPile)
            # print(oPile)
            moves += 1
        else:
            aPile.append(oPile.pop())
            # print(aPile)
            # print(oPile)
            moves += 1
    elif (len(aPile) == 0):
        aPile.append(oPile.pop())
        # print(aPile)
        # print(oPile)
        moves += 1
    else:
        impossible = True
        break

if (impossible):
    print('impossible')
else:
    print(moves)



