# Name: Chen Jie
# Matric No: A0158409X
# Lab Group: B2

from heapq import heappush, heappop

V, E, C, K, M = map(int,input().split())

AL = [[] for _ in range(V)]

for _ in range(E):
    u, v, w = map(int, input().split())
    u, v = u - 1, v -1
    AL[u].append((v,w))
    AL[v].append((u,w)) # undirected weighted edge

clearings = list(map(int,input().split()))

INF = 10**14
dist = [INF] * V
dist[0] = 0 # starting node

pq = []
heappush(pq, (0, 0))

# if C < K and C <= M:
#     print(-1)
#     exit()

while pq:
    d, u = heappop(pq) #shortest unvisited u
    if d > dist[u]:
        continue
    for v, w in AL[u]:
        if dist[u]+w >= dist[v]:
            continue
        dist[v] = (dist[u] + w)
        heappush(pq, (dist[v], v))

distList = []
for c in clearings:
    distList.append(dist[c-1]*2) # Go to clearing and back to cottage

distList.sort()
ans = -1
if C < K and C < M:
    pass
else: # C >= K
    val = min(M, K)
    ans = distList[val-1]

if ans == -1 or ans == 2 * INF:
    print(-1)
else:
    print(ans)




