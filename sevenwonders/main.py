cards = list(input())

collection = dict()

for i in cards:
    if i not in collection:
        collection[i] = 1
    else:
        collection[i] += 1

points = 0

for v in collection.values():
    points += v ** 2

if len(collection) == 3:
    points += (7 * collection[min(collection, key=collection.get)])

print(points)
