N = int(input())

for _ in range(N):
    turtles = list(map(int, input().split()))
    imported = 0
    for i in range(len(turtles)-1):
        if turtles[i] * 2 < turtles[i+1]:
            imported += turtles[i+1] - turtles[i] * 2
    print(imported)
