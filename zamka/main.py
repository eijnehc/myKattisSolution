L = int(input())
D = int(input())
X = int(input())

for i in range(L, D+1):
    sumOfDigits = 0
    for digit in str(i):
        sumOfDigits += int(digit)
    if sumOfDigits == X:
        print(i)
        break

for i in range(D, L-1, -1):
    sumOfDigits = 0
    for digit in str(i):
        sumOfDigits += int(digit)
    if sumOfDigits == X:
        print(i)
        break
