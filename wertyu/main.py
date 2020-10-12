import sys

mapper = [
    "`1234567890-=",
    "QWERTYUIOP[]\\",
    "ASDFGHJKL;'",
    "ZXCVBNM,./",
]

for line in sys.stdin:
    for ch in line:
        if ch == ' ':
            print(ch, sep='', end='')
        else:
            for r in range(4):
                for c in range(len(mapper[r])):
                    if mapper[r][c] == ch:
                        print(mapper[r][c-1], sep='', end='')
    print()
