from collections import deque

T = int(input())

for _ in range(T):
    line = input()
    isBack = True
    result = deque()
    word = []
    for i in line:
        if i == '<':
            if isBack == True:
                if word:
                    word.pop()
                elif result:
                    result[-1] = result[-1][:-1]# if word is empty, pop from result instead
                    if len(result[-1]) == 0:
                        result.pop()
            else:
                if word:
                    word.pop()
        elif i == '[':
            if word:
                if isBack:
                    result.append(''.join(word)) # append word to right of the result
                else:
                    result.appendleft(''.join(word)) # append to left of the result
                word = []
            isBack = False
        elif i == ']':
            if isBack:
                if word:
                    result.append(''.join(word))
                    word = []
            else:
                if word:
                    result.appendleft(''.join(word))
                    word = []
            isBack = True
        else:
            word.append(i)
        # print(result)
        # if (len(result) > 0):
        #     print(result[-1][-1])
    if word:
        if isBack:
            result.append(''.join(word))
        else:
            result.appendleft(''.join(word))

    print(*result, sep='')
