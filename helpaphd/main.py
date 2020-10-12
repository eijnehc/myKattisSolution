import fileinput
import sys

n = int(input())

for x in range(n):
    line = input()
    if (line == "P=NP"):
        print("skipped")
    else:
        a,b = map(int, line.split('+'))
        print(a+b)


