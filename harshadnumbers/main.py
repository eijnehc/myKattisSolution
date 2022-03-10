number = int(input())

while True:
    sumOfDigits = 0
    for digit in str(number):
        sumOfDigits += int(digit)
    if number % sumOfDigits == 0:
        break
    number += 1
print(number)
