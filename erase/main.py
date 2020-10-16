N = int(input())

beforeLine = list(map(int, input()))
afterLine = list(map(int, input()))

def inverseBit(afterline):
    afterLineInversed = []
    for i in afterline:
        if i == 0:
            afterLineInversed.append(1)
        else:
            afterLineInversed.append(0)

    return afterLineInversed

if (N % 2 == 0):
    if beforeLine == afterLine:
        print("Deletion succeeded")
    else:
        print("Deletion failed")
else:
    afterLineInversed = inverseBit(afterLine)
    if beforeLine == afterLineInversed:
        print("Deletion succeeded")
    else:
        print("Deletion failed")



