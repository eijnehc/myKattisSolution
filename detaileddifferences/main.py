N = int(input())

for _ in range(N):
    first = input()
    second = input()

    differences = []
    for i in range(len(first)):
        if first[i] == second[i]:
            differences.append(".")
        else:
            differences.append("*")
    print(first)
    print(second)
    print(*differences, sep="")
    print()
