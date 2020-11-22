from collections import deque

# # DFS
# import sys

# sys.setrecursionlimit(1000000)

# def dfs(u):
#     global AL, vi
#     vis[u] = True
#     for v in AL[u]:
#         if not vis[v]:
#             dfs(v)

N, M = map(int, input().split())
AL = [[] for _ in range(N)]
for _ in range(M):
    a, b = map(int, input().split())
    a, b = a - 1, b - 1 # 0-based indexing
    AL[a].append(b)
    AL[b].append(a)

vis = [False] * N
# dfs(0)

q = deque()
q.append(0)
vis[0] = True

while q: # while q is not empty
    u = q.popleft() # O(1)
    for v in AL[u]:
        if not vis[v]:
            vis[v] = True
            q.append(v)

all_connected = True
for u in range(N):
    if not vis[u]:
        print(u+1) # output had to be in 1-based indexing
        all_connected = False

if all_connected:
    print("Connected")
