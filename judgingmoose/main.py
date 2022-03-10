tines = list(map(int, input().split()))

if tines[0] == 0 and tines[1] == 0:
    print("Not a moose")
elif tines[0] == tines[1]:
    print("Even", tines[1]*2)
else:
    print("Odd", max(tines)*2)
