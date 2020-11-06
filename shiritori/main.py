N = int(input())

gameSet = set()
pastList = []

fairgame = True
word = input()
pastList.append(word)
gameSet.add(word)

for i in range(N-1):
    word = input()
    if word not in gameSet and word[0] == pastList[-1][-1]:
        gameSet.add(word)
    else:
        index = i
        fairgame = False
        break

    pastList.append(word)

if fairgame:
    print("Fair Game")
else:
    if index%2 == 0:
        print("Player 2 lost")
    else:
        print("Player 1 lost")

