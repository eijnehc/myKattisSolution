import sys
from heapq import heappush, heappop
from collections import deque

for line in sys.stdin:
    N = int(line)
    h =[]
    q = deque()
    s = []
    stack, queue, heap = True, True, True
    selem, qelem, helem = 0, 0, 0
    for i in range(N):
        t,x = map(int, input().split())
        if t == 1:
            s.append(x)
            q.append(x)
            heappush(h, -x)
        else:
            if s and q and h:
                selem = s[-1]
                s.pop()
                qelem = q[0]
                q.popleft()
                helem = -h[0]
                heappop(h)
                # print(x)
                # print(s, selem)
                # print(q, qelem)
                # print(h, helem)

                if x != selem:
                    stack = False
                if x != qelem:
                    queue = False
                if x != helem:
                    heap = False
            else:
                stack, queue, heap = False, False, False
    # print(stack, queue, heap)
    if not stack and not queue and not heap:
        print("impossible")
    elif (stack and queue) or (stack and heap) or (queue and heap):
        print("not sure")
    elif stack:
        print("stack")
    elif queue:
        print("queue")
    elif heap:
        print("priority queue")
