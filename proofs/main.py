N = int(input())

conclusionset = set()

correct = True
index = 0
for i in range(N):
    line = input()
    if line[0] == '-':
        conclusionset.add(line[3:])
    else:
        left, right = line.split('->')
        assumptions = left.split()
        conclusion = right.strip()

        if all(assumption in conclusionset for assumption in assumptions):
            conclusionset.add(conclusion)
        else:
            correct = False
            index = i + 1
            break

    # print("left: " + str(assumptionset) + "----" + " right: " + str(conclusionset))
if correct:
    print("correct")
else:
    print(index)




