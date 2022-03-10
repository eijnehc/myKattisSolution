s, t, n = map(int, input().split())
d = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))

time = s

for i in range(n):
    time += d[i]
    if (time % c[i] != 0):
        busWaitTime = c[i] - time % c[i]
        time += busWaitTime + b[i]
    else:
        time += b[i]

time += d[-1]

if time <= t:
    print("yes")
else:
    print("no")

