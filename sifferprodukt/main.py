n = input()

while (len(n) > 1):
    result = 1    
    for index in range(len(n)):
        if int(n[index]) != 0:
            result *= int(n[index])

    if result < 10:
        print(result)

    n = str(result)
