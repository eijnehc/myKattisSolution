w = int(input())
n = int(input())

area = 0

for x in range(n):
    width, length = map(int, input().split())
    area += (width*length)

print(int(area/w))
