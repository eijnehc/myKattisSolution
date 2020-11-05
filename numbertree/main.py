line = input().split()

path = ""

if len(line) == 2:
    path = line[1]
H = int(line[0])

idx = 1

for d in path:
    idx *= 2
    if d == 'R':
        idx += 1
print(2**(H+1)-idx)
