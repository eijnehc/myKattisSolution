d, n, m = map(int, input().split())

price = [-1]
while (len(price) < d):
    price = price + list(map(int, input().split()))

peaks = 0
valleys = 0

for x in range(n, d-n+2):
    valid = True
    for y in range(x-n+1, x, +1):
        if(price[y] > price[y+1]):
            valid = False
    for y in range(x+1, x+n, +1):
        if (price[y] > price[y-1]):
            valid = False
    if (valid):
        peaks += 1

for x in range(m, d-m+2):
    valid = True
    for y in range(x-m+1, x, +1):
        if(price[y] < price[y+1]):
            valid = False
    for y in range(x+1, x+m, +1):
        if (price[y] < price[y-1]):
            valid = False
    if (valid):
        valleys += 1


print(peaks, valleys)



