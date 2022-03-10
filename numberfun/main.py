N = int(input())

for _ in range(N):
    a, b, c = map(int, input().split())
    possible = False

    if a + b == c or a * b == c or a - b == c or b - a == c:
        possible = True
    elif a / b == c and a % b == 0:
        possible = True
    elif b / a == c and b % a == 0:
        possible = True

    if possible:
        print("Possible")
    else:
        print("Impossible")
