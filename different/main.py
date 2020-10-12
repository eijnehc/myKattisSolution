import sys
import fileinput


for line in fileinput.input():
    number = line.split(" ")
    absDiff = abs(int(number[0])-int(number[1]))
    print(absDiff)



