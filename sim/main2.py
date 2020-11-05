T = int(input())

for _ in range(T):
    line = input()
    word = []
    index = 0
    for i in line:
        if i == '[':
            index = 0
        elif i == ']':
            index = len(word)
        elif i == '<':
            if (index != 0):
                index -= 1
                word.pop(index)
        else:
            word.insert(index, i)
            index += 1
        # print(word)

    print(*word, sep='')
