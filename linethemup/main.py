N = int(input())
nameList = []
for _ in range(N): # O(N*1) = O(N)
    nameList.append(input()) #O(1)

sortednames = sorted(nameList)

if nameList == sortednames:
    print("INCREASING")
else:
    print("DECREASING" if nameList == sortednames[::-1] else "NEITHER")


