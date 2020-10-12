n = int(input())

listOfNum = list(map(int,input().split(" ")))

minNum = listOfNum[0]
index = 0
for x in range(1,n):
    if (listOfNum[x] < minNum):
        minNum = listOfNum[x];
        index = x;
print(index)


