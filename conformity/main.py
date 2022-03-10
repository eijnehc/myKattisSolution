N = int(input())

courses = dict()

for i in range(N):
    ids = input().split()
    ids.sort()
    y = " ".join(ids)

    if y not in courses.keys():
        courses[y] = 1
    else:
        courses[y] += 1

numbarr = [courses[i] for i in courses.keys()]
maxs = max(numbarr)

count = 0
for i in numbarr:
    if i == maxs:
        count += 1

print(count * maxs)
# print (len([i for i in numbarr if i==maxs])*maxs)
