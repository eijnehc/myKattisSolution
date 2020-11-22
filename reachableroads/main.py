from collections import deque

N = int(input())

for _ in range(N):
    V = int(input()) # number of vertices
    E = int(input()) # number of edges
    AL = [[] for _ in range(V)]
    for _ in range(E):
        a, b = map(int, input().split())
        # a, b = a-1, b -1 # Go to 0 based indexing
        # print(a,b)
        AL[a].append(b) # directed edge a->b
        AL[b].append(a) # direted edge b->a, that makes a-b bidirectional

    vis = [False] * V

    numCC = 0
    for s in range(V):
        if not vis[s]:
            numCC += 1
            q = deque()
            q.append(s)
            vis[s] = True
            while q:
                u = q.popleft()
                for v in AL[u]:
                    if not vis[v]:
                        vis[v] = True
                        q.append(v)

    print(numCC-1)
