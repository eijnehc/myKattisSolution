#full name: Chen Jie
#matric no.: A0158409X
#lab group: B2

import heapq

T = int(input())

for _ in range(T):
    N = int(input())
    canvas = list(map(int, input().split()))
    inkSum = 0
    heapq.heapify(canvas) #transform into min pq #O(N)
    while(len(canvas)>1): #O(n) * 3O(logn) = O(nlogn)
        ink = 0
        ink = heapq.heappop(canvas) #O(logn)
        ink += heapq.heappop(canvas) #O(logn)
        inkSum += ink
        heapq.heappush(canvas, ink) #O(logn)
    print(inkSum)

