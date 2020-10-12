t = int(input())

for _ in range(t):
    P, R, F = map(int, input().split())
    year = 0
    while P <= F:
        year += 1
        P *= R

    print(year)
