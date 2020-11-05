from heapq import heappop, heappush

P = int(input())

h = []

for _ in range(P):
    k, N = map(int, input().split())
    num = 1
    dem = 1
    tree = []
    while N != 1:
        if N%2 == 0:
            tree.append('l')
        else:
            tree.append('r')
        N = N // 2
    #     print(N)
    # print(tree)
    while tree:
        side = tree[-1]
        tree.pop()
        if (side == 'l'):
            dem += num
        else:
            num += dem

    print(str(k) + " " + str(num) + "/" + str(dem))

