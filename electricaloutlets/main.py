N = int(input())

for _ in range(N):
    testcase = list(map(int, input().split()))
    K = testcase[0]
    O = testcase[1:]
    numberOfOutlets = 0
    for i in O:
        numberOfOutlets += i
    print(numberOfOutlets - (K -1))
