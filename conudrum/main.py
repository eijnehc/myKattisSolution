word = input()

days = 0

for i in range(len(word)):
    if i % 3 == 0 and word[i] != "P":
        days += 1
    if i % 3 == 1 and word[i] != "E":
        days += 1
    if i % 3 == 2 and word[i] != "R":
        days += 1
print(days)
