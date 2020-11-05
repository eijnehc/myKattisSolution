# Name: Chen Jie
# Matric No.: A0158409X
# Lab Group: B2

n = int(input())

guests = list(map(int, input().split()))

language = dict()
diff = n

for i in range(n): #O(n)
    if guests[i] not in language:
        language[guests[i]] = i #O(1)
    else:
        diff = min(diff, i-language[guests[i]]) #O(1)
        language[guests[i]] = i
# print(language)

# for value in language.values():
#     if len(value) > 1:
#         maxIndex = max(value)
#         minIndex = min(value)
#         diff = min(diff, maxIndex-minIndex)

print(diff)

