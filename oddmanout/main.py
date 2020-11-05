N = int(input())

for i in range(N):
    G = int(input())
    C = list(input().split())
    guests = dict()
    for j in C:
        if j not in guests:
            guests[j] = 1
        else:
            guests[j] += 1
    for key, values in guests.items():
        if values%2 != 0:
            print("Case #" + str(i+1) + ": " + key)
            break
