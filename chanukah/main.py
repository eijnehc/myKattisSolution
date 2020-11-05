P = int(input())

for _ in range(P):
    k, n = map(int, input().split())
    chanukah = 0
    for i in range(1, n+1):
        chanukah += i
    chanukah += n
    print(k,chanukah)
