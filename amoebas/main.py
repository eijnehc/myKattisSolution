def floodfill(r,c):
    global grid, x, y
    grid[r][c] = "." # turn this black cell into a white cell
    dr = [ 1, 1, 1, 0,-1,-1,-1, 0] #SE/S/SW/W/NW/N/NE/E
    dc = [ 1, 0,-1,-1,-1, 0, 1, 1]
    for d in range(8):
        nr, nc = r + dr[d], c + dc[d]
        if nr < 0 or nr >= x or nc < 0 or nc >= y: continue # outside 2d grid
        if grid[nr][nc] == ".": continue # touching a neighbouring white cell skip
        floodfill(nr,nc)

def debug(grid):
    for row in grid:
        print("".join(row))
    print()

x , y = map(int, input().split())
grid = []

for _ in range(x):
    grid.append(list(input()))

numAmoebas = 0

for r in range(x):
    for c in range(y):
        if grid[r][c] == "#":
            numAmoebas += 1
            floodfill(r, c) # starting point is cell/vertex (r,c)
            # debug(grid)
print(numAmoebas)

