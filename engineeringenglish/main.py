import sys
sentence = []
english = set()
for line in sys.stdin:
    words = line.split()
    for i in words:
        if i.lower() in english:
            sentence.append(".")
        else:
            english.add(i.lower())
            sentence.append(i)

print(*sentence)




