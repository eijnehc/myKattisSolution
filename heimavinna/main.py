questions = 0

groups = input().split(";")

for group in groups:
    if '-' in group:
        start, end = map(int, group.split("-"))
        for i in range(start, end+1):
            questions += 1
    else:
        questions += 1
print(questions)
