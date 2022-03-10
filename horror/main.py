from collections import deque

N, H, L = map(int, input().split())
q = deque()

INF = 10 ** 9 # big number
HI = [INF] * N

horror_list = list(map(int, input().split()))

for h in horror_list:
    q.append(h)
    HI[h] = 0

AL = [[] for _ in range(N)]
for _ in range(L):
    a, b = map(int, input().split())
    AL[a].append(b)
    AL[b].append(a) # bidirectional

while q: # not empty
    u = q.popleft() #O(1)
    for v in AL[u]:
        if HI[v] != INF: # somebody else had reached v before
            continue #skip
        HI[v] = HI[u] + 1
        q.append(v)

print(HI.index(max(HI)))

