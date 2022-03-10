input()

expenses = 0
account = map(int, input().split())

for i in account:
    if i < 0:
        expenses += i
print(expenses * -1)
