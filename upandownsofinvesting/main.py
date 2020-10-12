d, n, m = map(int, input().split())

peaks = 0
valleys = 0
price = []
while (len(price) < d):
    price = price + list(map(int, input().split()))

ups = 0
downs = 0
for x in range(0, d-1):
    if (price[x] < price[x+1]):
        ups += 1
    if (ups == n and price[x+1] > price[x+2]):
        print(x+2)
        peaks += 1
        ups = 1
        # for y in range(1,n):
        #     if (price[x] > price[x+y]):
        #         valid == False

# print(peaks)

    # if (price[x] > price[x+1]):
    #     downs += 1
    # if (downs == m and price[x+1] > price[x]):
    #     downs = 0




