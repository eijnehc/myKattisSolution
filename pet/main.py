contestant = dict()

for i in range(1, 6):
    score = sum(map(int, input().split()))
    contestant[i] = score
winner = max(contestant, key=contestant.get)
print(winner, contestant[winner])
