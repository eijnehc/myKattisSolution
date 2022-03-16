s = input().split(" ")

result = s[1][0]

if s[0] == 'E':
    count = 1
    for index in range(1,len(s[1])):
        if result[-1] == s[1][index]:
            count += 1
        else:
            result += str(count)
            result += s[1][index]
            if (count > 1):
                count = 1
    
    print(result+str(count))
else:
    for index in range(1,len(s[1])):
        if s[1][index].isdigit():
            result += result[-1] * (int(s[1][index])-1)
        else:
            result += s[1][index]  
    print(result)