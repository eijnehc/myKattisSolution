s = input()

result = s[0]
for idx in range(1,len(s)):
    if (result[-1] == s[idx]):
        continue
    else:
        result += s[idx]

print(result)