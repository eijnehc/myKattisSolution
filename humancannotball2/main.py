import math

N = int(input())

g = 9.81

for _ in range(N):
    v, theta, x1, h1, h2 = map(float, input().split())
    time = x1 / (v * math.cos(math.radians(theta)))
    y = v * time * math.sin(math.radians(theta)) - 0.5 * g * time ** 2
    if (y >= h1 + 1) and (y <= h2 - 1):
        print("Safe")
    else:
        print("Not Safe")

