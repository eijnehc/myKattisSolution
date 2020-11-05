N = int(input())

for _ in range(N):
    n = int(input())
    fact = 1
    for i in range(1,n+1):
        fact *= i
    print(str(fact)[-1])
