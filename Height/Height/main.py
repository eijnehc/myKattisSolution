N = int(input())

for _ in range(N):
    line = list(map(int, input().split()))
    k = line[0]
    A = line[1:] #index 1 to the end of line

    ans = 0
    for i in range(1, 20): #O(N)
        x = A[i]
        j = i - 1
        while (j >= 0) and (A[j] > x):
            A[j+1] = A[j] # make a place for x
            j -= 1
            ans += 1
        A[j+1] = x

    print(k, ans)

