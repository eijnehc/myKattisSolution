k = int(input())

for i in range(k):
    inputLine = input()
    total = 0
    k, b, n = map(int,inputLine.split(" "))
    while n > 0:
        total += (n%b) ** 2
        n //= b
    print(k, total)