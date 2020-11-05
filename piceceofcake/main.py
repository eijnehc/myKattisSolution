n, h, v = map(int, input().split())

if ((n+1)//2 > h):
    h = n - h
if ((n+1)//2 > v):
    v = n -v

print(h * v * 4)
