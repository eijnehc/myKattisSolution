def GetFirstTwoCharacters(s):
    return s[0:2]

FirstTestCase = True
while(True):
    n = int(input())
    if (n == 0):
        break
    nameList = []
    for _ in range(n):
        nameList.append(input()) #O(1)

    nameList.sort(key = GetFirstTwoCharacters) # Timesort, stable

    if not FirstTestCase: print()
    FirstTestCase = False

    print(*nameList, sep='\n')


