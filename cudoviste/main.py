R, C = map(int, input().split())

parkingMap = []
for i in range(R):
    parkingMap.append(list(input()))

ans = [0, 0, 0, 0, 0]
for i in range(R-1):
    for j in range(C-1):
        cars = 0

        if parkingMap[i][j] == "X":
            cars += 1
        if parkingMap[i+1][j] == "X":
            cars += 1
        if parkingMap[i][j+1] == "X":
            cars += 1
        if parkingMap[i+1][j+1] == "X":
            cars += 1

        if parkingMap[i][j] == "#":
            continue
        if parkingMap[i+1][j] == "#":
            continue
        if parkingMap[i][j+1] == "#":
            continue
        if parkingMap[i+1][j+1] == "#":
            continue

        ans[cars] += 1

for cars in ans:
    print(cars)
