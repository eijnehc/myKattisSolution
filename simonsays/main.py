N = int(input())

for _ in range(N):
    words = input().split()
    if len(words) > 1:
        command = words[0] + " " + words[1]
        if command == "Simon says":
            print(*words[2:])
