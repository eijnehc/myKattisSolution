# name: Chen Jie
# matric no: a0158409X
# lab group: b2

# line = input()

# container = []

# for i in range(len(line)):
#     if line[i] != '<':
#         container.append(line[i])
#     else:
#         container.pop()
# print(*container, sep='')

code = list(input())
print(code)
for i in code:
  ans = []
  print(ans)
  if i != "<":
    ans.append(i)
    print(ans)
  else:
    ans.pop()
print(*ans, sep='')
