N = int(input())

ranking = dict()

for _ in range(N):
    uni, team = input().split()
    if uni not in ranking:
        ranking[uni] = team
count = 0
# print("---------------------")
for uni, team in ranking.items():
    if count == 12:
        break
    else:
        print(uni, team)
    count += 1
