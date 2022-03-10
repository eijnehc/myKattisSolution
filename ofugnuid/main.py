N = int(input())

inputList = []

for _ in range(N):
    inputList.append(input())

inputList.reverse()

print(*inputList, sep="\n")
