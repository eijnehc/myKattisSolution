n, p, m = map(int, input().split())

score = dict()

for _ in range(n): #O(n * 1) = O(n)
    score[input()] = 0 #O(1)

got_winner = False
for _ in range(m): #O(m)
    name, pt = input().split() #O(1)
    score[name] += int(pt) #O(1)
    if score[name] >= p: #O(1)
        print(name, "wins!") #O(1)
        score[name] = -1e9
        got_winner = True #O(1)

if not got_winner: #O(1)
    print("No Winner!") #O(1)
