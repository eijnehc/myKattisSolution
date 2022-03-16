s = input() 

vowels=['a','e','i','o','u']

result = ''

i = 0

while(i < len(s)):
    result += s[i]
    if s[i] in vowels:
        i += 3
    else:
        i += 1
        
print(result)
