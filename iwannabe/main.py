N, K = map(int, input().split())

pokenomList = []
bashTeam = set()
for id in range(N):
    pokenom = list(map(int, input().split()))
    pokenom.append(id)
    pokenomList.append(pokenom)

# Attack
attack = sorted(pokenomList,key=lambda x:x[0])
# Defence
defence = sorted(pokenomList,key=lambda x:x[1])
# Health
health = sorted(pokenomList,key=lambda x:x[2])

for i in range(K):
    bashTeam.add(attack[-(i+1)][-1])
    bashTeam.add(defence[-(i+1)][-1])
    bashTeam.add(health[-(i+1)][-1])

print(len(bashTeam))
