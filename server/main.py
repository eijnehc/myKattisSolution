from collections import deque

n, T = map(int, input().split())
q = deque(list(map(int, input().split())))
ans = 0

while q:
    nxt = q.popleft()
    # print("considering ", nxt)
    if T-nxt >= 0:
        ans += 1
        T -= nxt
    else:
        break

print (ans)
