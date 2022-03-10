G, C, S = map(int, input().split())

bp = G * 3 + C * 2 + S

if bp >= 8:
    print("Province or Gold")
elif bp >= 6:
    print("Duchy or Gold")
elif bp >= 5:
    print("Duchy or Silver")
elif bp >= 3:
    print("Estate or Silver")
elif bp >= 2:
    print("Estate or Copper")
else:
    print("Copper")
