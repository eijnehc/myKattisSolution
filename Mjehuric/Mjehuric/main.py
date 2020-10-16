numList = list(map(int, input().split()))

for i in range(len(numList)): #O(N^3) --> O(N)
    for j in range(len(numList) - 1): # stop by one before O(N)
        if (numList[j+1] < numList[j]):
            numList[j], numList[j+1] = numList[j+1], numList[j] #Python can do this
            print(*numList) #O(N)
