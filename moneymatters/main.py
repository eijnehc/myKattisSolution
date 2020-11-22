# Name: Chen Jie
# Matric No. A0158409X
# Lab Group: B2

from collections import deque

n, m = map(int, input().split())
AL = [[] for _ in range(n)]

moneyInfo = []

for _ in range(n):
    moneyInfo.append(int(input()))

for _ in range(m):
    a, b = map(int, input().split())
    AL[a].append(b)
    AL[b].append(a)

vis = [False] * n
possible = True
for s in range(n):
    debt = 0
    if not vis[s]:
        q = deque()
        q.append(s)
        vis[s] = True
        while q:
            u = q.popleft()
            debt += moneyInfo[u]
            for v in AL[u]:
                if not vis[v]:
                    vis[v] = True
                    q.append(v)

        if debt == 0:
            continue
        else:
            possible = False
            break
if possible:
    print("POSSIBLE")
else:
    print("IMPOSSIBLE")
