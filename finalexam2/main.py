N = int(input())

count = 0
prev = input()
for _ in range(N-1):
    curr = input()
    if prev == curr:
        count += 1
    prev = curr
print(count)
