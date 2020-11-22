# Mame: Chen Jie
# Matric no.: A0158409X
# Lab Group: B02


while True:
    n = int(input())
    weakVertices = []
    if (n == -1):
        break
    else:
        AL = [[] for _ in range(n)]
        # AM = []
        for i in range(n):
            line = list(map(int, input().split()))
            # AM.append(line)
            for j in range(len(line)):
                if line[j] == 1:
                    AL[i].append(j)

        # for i in range(n):
        #     if len(AL[i] > 1):
        #         for j in range(len(AL[i])):
        #             for k in
        #             if AM[AL[i][0]][AL[i][1]] == 1:
        #                 continue
        for i in range(n):
            count = 0
            for j in AL[i]:
                if any(x in AL[i] for x in AL[j]):
                    count += 1
            if count < 2:
                    weakVertices.append(i)

    weakVertices.sort()
    print(*weakVertices)
