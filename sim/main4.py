from collections import deque
N = int(input())

for _ in range(N):
    sentence = input()
    indexBack = True
    frontlist = []
    decrypt = []
    v = deque()
    for i in range(len(sentence)): #O(KN)
        if sentence[i] == '<':
            if (indexBack and len(decrypt) != 0):
                decrypt.pop()
            elif (len(frontlist) != 0):
                frontlist.pop()
            else:
                continue
        elif sentence[i]  == '[':
            if (len(frontlist) != 0):
                frontlist += decrypt
                decrypt = frontlist
            frontlist = []
            indexBack = False
        elif sentence[i]  == ']':
            indexBack = True
            frontlist += decrypt
            decrypt = frontlist
            frontlist = []
        else:
            if indexBack == False:
                frontlist.append(sentence[i])
            else:
                decrypt.append(sentence[i])
    print(*decrypt, sep='')
