from collections import deque

T = int(input())

for _ in range(T):
    line = input()
    isBack = True
    result = deque()
    word = []
    for i in line:
        if i == '<':
            if len(word) > 0:
                word.pop()
            else:
                continue
        elif i == '[':
            # if len(word) > 0:
            if isBack:
                result.append(''.join(word))
            else:
                result.appendleft(''.join(word))
            word = []
            isBack = False
        elif i == ']':
            if isBack:
                continue
            else:
                # if len(word) > 0:
                result.appendleft(''.join(word))
                word = []
                isBack = True
        else:
            word.append(i)
        # print(result)
    if isBack:
        result.append(word)
    else:
        result.appendleft(word)

    for word in result:
        print(*word, sep='', end='')
    print()
