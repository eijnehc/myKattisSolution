N = int(input())

for _ in range(N):
    sounds = list(input().split())
    fox = False
    animalsound = set()
    while not fox:
        line = input()
        if line == "what does the fox say?":
            for i in sounds:
                if i not in animalsound:
                    print(i, end=" ")
            print()
            fox = True
        else:
            animalsound.add(line.split()[2])

# for _ in range(N):
#     recordings = OrderedDict()
#     sounds = list(input().split())
#     for i in sounds:
#         if i not in recordings:
#             recordings[i] = 1
#         else:
#             recordings[i] += 1
#     fox = False
#     while not fox:
#         line = input()
#         if line == "what does the fox say?":
#             for key, values in recordings.items():
#                 for _ in range(values):
#                     print(key, end= " ")
#             print()
#             fox = True
#         else:
#             animalsound = line.split()[2]
#             if animalsound in recordings:
#                 del recordings[animalsound]

