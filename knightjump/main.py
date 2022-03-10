# Name: Chen Jie
# Matric No: A0158409X
# Lab Group: B2

from collections import deque

N = int(input())
q = deque()

grid =[]

for _ in range(N):
    grid.append(list(input()))

s = [-1, -1]
goal = [0, 0]

for r in range(N):
    for c in range(N):
        if grid[r][c] == "K":
            s = [r, c, 0]
            break

q.append(s)
dr = [ 2, 2, -2, -2, 1, 1, -1, -1 ]
dc = [ 1, -1, 1, -1, 2, -2, 2, -2 ]

visited = [[0 for _ in range(N)] for _ in range(N)]
visited[s[0]][s[1]] = 1
counter = -1
while q:
    u = q.popleft()
    if goal == u[:2]:
        counter = u[2]
        break
    # print(u)
    for d in range(8):
        nr, nc = u[0] + dr[d], u[1] + dc[d]
        if nr < 0 or nr >= N or nc < 0 or nc >= N or grid[nr][nc] == "#" or visited[nr][nc]:
            continue
        else:
            visited[nr][nc] = 1
            q.append([nr, nc, u[2]+1])


print(counter)
