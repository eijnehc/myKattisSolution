import statistics
import string

# matric no: A0158409X
# full name: Chen Jie
# lab group: B2

N, t = map(int, input().split());
A = list(map(int, input().split()));

if (t == 1):
    print("7")
elif (t == 2):
    if (A[0] < A[1]):
        print("Smaller")
    elif (A[0] == A[1]):
        print("Equal")
    else:
        print("Bigger")
elif (t == 3):
    print(statistics.median(A[:3]))
elif (t == 4):
    print(sum(A))
elif (t == 5):
    sumEven = 0
    for x in A:
        if x%2 == 0:
            sumEven += x
    print(sumEven)
elif (t == 6):
    alphabetString = list(string.ascii_lowercase)
    word = []
    for i in A:
        index = i % 26
        word.append(alphabetString[index])
    print(*word, sep='')
elif(t == 7):
    cyclic = False
    i = 0
    counter = 0
    while(cyclic == False):
        if counter == N:
            cyclic = True
            break
        i = A[i]
        if i > N-1:
            print("Out")
            break
        elif (i == N-1):
            print("Done")
            break
        else:
            counter += 1

    if (cyclic):
        print("cyclic")
