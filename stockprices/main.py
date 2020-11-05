from heapq import heappush,heappop

N = int(input())

for _ in range(N):
    n = int(input())
    min_pq_seller = [] # minpq for cheapest seller
    max_pq_buyer = [] # maxpq for the seller buyer wants lower price
    s = '-'
    for _ in range(n):
        a, b = '-', '-'
        line = input().split()
        x, y = int(line[1]), int(line[4])
        if line[0] == 'buy':
            heappush(max_pq_buyer, (-y, x))
        else:
            heappush(min_pq_seller, (y, x))

        if min_pq_seller:
            a = min_pq_seller[0][0] #cheapest seller
        if max_pq_buyer:
            b = -max_pq_buyer[0][0] #richest buyer

        # Check for transaction
        # occur when asking price is less than or equal to bidding price
        while (max_pq_buyer and min_pq_seller and min_pq_seller[0][0] <= -max_pq_buyer[0][0]):
            seller, buyer = min_pq_seller[0], max_pq_buyer[0]
            heappop(min_pq_seller)
            heappop(max_pq_buyer)
            s = seller[0]
            # print("seller", seller)
            # print("buyer", buyer)
            if seller[1] > buyer[1]:
                heappush(min_pq_seller, (seller[0],seller[1]-buyer[1]))
                # print("minpq", min_pq_seller)
            elif seller[1] < buyer[1]:
                heappush(max_pq_buyer, (buyer[0],buyer[1]-seller[1]))
                # print("maxpq", max_pq_buyer)

        if min_pq_seller:
            a = min_pq_seller[0][0] #cheapest seller
        else:
            a = '-'
        if max_pq_buyer:
            b = -max_pq_buyer[0][0] #richest buyer
        else:
            b = '-'
        print(a, b, s)
