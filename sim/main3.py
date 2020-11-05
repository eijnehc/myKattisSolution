N = int(input())

for _ in range(N):
    sentence = input()
    indexBack = True
    decrypt = []
    count = 0
    for i in range(len(sentence)): #O(KN)
        if sentence[i] == '<':
            if (indexBack and len(decrypt) != 0):
                decrypt.pop()
            else:
                continue
        elif sentence[i]  == '[':
            if (len(frontlist) != 0):
                decrypt = frontlist + decrypt
            frontlist = []
            indexBack = False
        elif sentence[i]  == ']':
            indexBack = True
            decrypt = frontlist + decrypt
            frontlist = []
        else:
            if indexBack == False:
                frontlist.append(sentence[i])
            else:
                decrypt.append(sentence[i])
    print(*decrypt, sep='')
