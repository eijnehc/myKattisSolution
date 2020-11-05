# Name: Chen Jie
# Matric No.:A0158409X
# Lab Group: B2

n = int(input())

trip = dict()

for _ in range(n):
    country, year = input().split()
    if country not in trip:
        trip[country] = []
    trip[country].append(int(year)) #must be integer for year

for years in trip.values(): #O(nlogn) * 20 = #O(nlogn)
    years.sort() #O(nlogn) natural ordering

q = int(input())

for _ in range(q): #O(n)
    s, k = input().split() #O(1)
    print(trip[s][int(k)-1]) #O(1)

