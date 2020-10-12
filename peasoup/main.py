n = int(input())

exists = False;
for i in range(n):
    k = int(input())
    rest = input()
    foodlist = []
    for j in range(k):
        food = input()
        foodlist.append(food)
    if ('pea soup' in foodlist and 'pancakes' in foodlist):
        print(rest)
        exists = True
        break

if (exists == False):
    print("Anywhere is fine I guess")
