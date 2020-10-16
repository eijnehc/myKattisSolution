# full name: Chen Jie
# matric no: A0158409X
# lab group: B2

N, t = map(int, input().split())

A = list(map(int, input().split()))

if (t == 1):
    sortedList = sorted(A) #O(NlogN)
    num7777 = False;
    lastIndex = N-1
    firstIndex = 0
    while(firstIndex != lastIndex): #O(N)
        if (sortedList[firstIndex] + sortedList[lastIndex] > 7777):
            # print("bigger" + " " + str(firstIndex) + " " + str(lastIndex))
            lastIndex -= 1
        elif (sortedList[firstIndex] + sortedList[lastIndex] < 7777):
            # print("smaller" + " " + str(firstIndex) + " " + str(lastIndex))
            firstIndex += 1
        else:
            num7777 = True
            break
    if (num7777):
        print("Yes")
    else:
        print("No")
elif (t==2):
    if len(set(A)) == N: #O(1)
        print("Unique")
    else:
        print("Contains duplicate")
elif (t==3):
    commonInt = N//2
    numCounter = {}
    intExists = False
    for i in A: #O(N)
        if i not in numCounter:
            numCounter[i] = 1 #O(1)
        else:
            numCounter[i] += 1 #O(1)

    for key, value in numCounter.items(): #O(N)
        if value > commonInt: #O(1)
            print(key) #O(1)
            intExists = True
            break
    if (intExists == False):
        print(-1)

elif (t==4):
    sortedList = sorted(A) #O(NlogN)
    median = sortedList[N//2]
    if (N % 2 == 0): #O(1)
        median1 = sortedList[N//2 -1]
        print(median1, median)
    else:
        print(median)
else:
    sortedList = sorted(A)
    rangeList = []
    for i in sortedList: #O(N)
        if i in range(100, 1000, 1): #O(logN)
            rangeList.append(i)
    print(*rangeList)


