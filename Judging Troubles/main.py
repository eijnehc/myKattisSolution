N = int(input())

dom = []
kat =[]
for _ in range(N):
    dom.append(input())

for _ in range(N):
    kat.append(input())

domSorted = sorted(dom)
katSorted = sorted(kat)

count = 0
i = 0
j = 0
while i < len(domSorted) and j < len(katSorted):
    if domSorted[i] == katSorted[j]:
        count += 1
        i += 1
        j += 1
    elif (domSorted[i] > katSorted[j]):
        j += 1
    else:
        i += 1

print(count)


