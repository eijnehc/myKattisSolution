from collections import deque

N = int(input())

for _ in range(N):
    p = input()
    n = int(input())
    q = deque(list(input()[1:-1].split(',')))
    if n == 0:
        q.clear()
    error = False
    isReverse = False
    for i in p: #O(length of p)
        if i == 'D':
            if not q: #O(1)
                error = True #O(1)
                break #O(1)
            else: #O(1)
                if isReverse:
                    q.pop() #O(1)
                else:
                    q.popleft() #O(1)
        else:
            isReverse = not isReverse #O(1)
            # x.reverse() #O(n)
    if error:
        print("error")
    else:
        if (isReverse):
            q.reverse() #O(n)

        print("[" + ','.join(q), ']', sep='' )



