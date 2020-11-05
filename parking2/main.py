N = int(input())

for _ in range(N):
    t = int(input())
    x = list(map(int, input().split()))
    minimum = min(x)
    maximum = max(x)
    print((maximum - minimum) * 2)
