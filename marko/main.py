N = int(input())

words = []
for _ in range(N):
    words.append(input())

digits = list(input())

t9 = {
    2: ['a','b','c'],
    3: ['d','e','f'],
    4: ['g','h','i'],
    5: ['j','k','l'],
    6: ['m','n','o'],
    7: ['p','q','r','s'],
    8: ['t','u','v'],
    9: ['w','x','y','z']
}

count = 0
for word in words:
    possible = True
    for i in range(len(word)):
        if word[i] in t9[int(digits[i])]:
            continue
        else:
            possible = False
            break
    if possible:
        count += 1

print(count)



