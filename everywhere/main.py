N = int(input())

for i in range(N):
    uniquePlaces = set()
    n = int(input())
    for j in range(n):
        uniquePlaces.add(input())
    print(len(uniquePlaces))
