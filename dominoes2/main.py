from collections import deque

# def dfs(u):
#     global AL, vis
#     vis[u] = True
#     for v in AL[u]:
#         if not vis[v]:
#             dfs(v)



T = int(input())
for _ in range(T):
    n, m, l = map(int, input().split())
    AL = [[] for _ in range(n)]
    for _ in range(m):
        x, y = map(int, input().split())
        x, y = x-1, y-1 # go to 0-based indexing
        AL[x].append(y) # directed edge x->y
    vis = [False] * n
    for _ in range(l):
        z = int(input())-1 # go to 0-based indexing
        # dfs(z)
        q = deque()
        q.append(z)
        vis[z] = True
        while q: #while q is not empty
            u = q.popleft() # O(1) in deque
            for v in AL[u]:
                if not vis[v]:
                    vis[v] = True
                    q.append(v)
    print(sum(vis))
