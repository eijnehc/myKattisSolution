line = input()

playerA = 0
playerB= 0
for n in range(len(line)):
    if (n%2==0):
        if (line[n] == 'A'):
            playerA += int(line[n+1])
        else:
            playerB += int(line[n+1])

if (playerA > playerB):
    print("A")
else:
    print("B")
