# Name: Chen Jie
# Matric No. A0158409X
# Lab Group: B2

from collections import deque

W, H = map(int, input().split())

maze = []

for _ in range(H):
    maze.append(list(input()))

startingPos = [-1, -1]

for i in range(H):
    for j in range(W):
        if maze[i][j] == 'P':
            startingPos = [i, j]
            break

gold = 0
q = deque()

vis = [[False for _ in range(W)] for _ in range(H)]
vis[startingPos[0]][startingPos[1]] = True
q.append(startingPos)

while q:
    pos = q.popleft()

    if maze[pos[0]][pos[1]] == 'G':
        gold += 1

    # player next move is a trap, do not add to queue
    if maze[pos[0]+1][pos[1]] == "T" or maze[pos[0]-1][pos[1]] == "T" or maze[pos[0]][pos[1]+1] == "T" or maze[pos[0]][pos[1]-1] == "T":
        continue

    # player move up
    if (maze[pos[0]+1][pos[1]] == "." or maze[pos[0]+1][pos[1]] == "G") and vis[pos[0]+1][pos[1]] == False:
        q.append([pos[0]+1, pos[1]])
        vis[pos[0]+1][pos[1]] = True

    # player move down
    if (maze[pos[0]-1][pos[1]] == "." or maze[pos[0]-1][pos[1]] == "G") and vis[pos[0]-1][pos[1]] == False:
        q.append([pos[0]-1, pos[1]])
        vis[pos[0]-1][pos[1]] = True

    # player move right
    if (maze[pos[0]][pos[1]+1] == "." or maze[pos[0]][pos[1]+1] == "G") and vis[pos[0]][pos[1]+1] == False:
        q.append([pos[0], pos[1]+1])
        vis[pos[0]][pos[1]+1] = True

    # player move left
    if (maze[pos[0]][pos[1]-1] == "." or maze[pos[0]][pos[1]-1] == "G") and vis[pos[0]][pos[1]-1] == False:
        q.append([pos[0], pos[1]-1])
        vis[pos[0]][pos[1]-1] = True

print(gold)
