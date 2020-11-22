# Name: Chen Jie
# Matric No.: A0158409X
# Lab Group: B2

lastChar = input()[-1]

n = int(input())

AL = [[] for _ in range(26)]

for _ in range(n):
    animal = input()
    AL[ord(animal[0])-97].append(animal)

win = False
if AL[ord(lastChar)-97]:


    firstPick = AL[ord(lastChar)-97][0]
    for animal in AL[ord(lastChar)-97]:
        if ord(animal[0]) == ord(animal[-1]): # check myself first
            if len(AL[ord(lastChar)-97]) == 1:
                win = True
                print(animal + "!")
                break
        elif AL[ord(animal[-1])-97]: # found animal
            continue
        else: # no animal in list
            win = True
            print(animal + "!")
            break
    if not win:
        print(firstPick)

else:
    print("?")

