from heapq import heappush, heappop

while True:
    n, m, q, s = map(int, input().split())

    if n+m+q+s == 0:
        break

    AL = [[] for _ in range(n)]

    for _ in range(m):
        u, v, w = map(int, input().split())
        AL[u].append((v,w)) # directed weighted edge
    INF = 10**9
    dist = [INF] * n
    dist[s] = 0 # starting node

    pq = []
    heappush(pq, (0, s))

    while pq:
        d, u = heappop(pq) #shortest unvisited u
        if d > dist[u]:
            continue
        for v, w in AL[u]:
            if dist[u]+w >= dist[v]:
                continue
            dist[v] = dist[u] + w
            heappush(pq, (dist[v], v))

    for _ in range(q):
        t = int(input())
        if (dist[t] == INF):
            print("Impossible")
        else:
            print(dist[t])

    print()


