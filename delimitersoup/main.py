N = int(input()) #no need to store

L = input()

def opposite(c):
    if c == '(': return ')'
    elif c == '[': return ']'
    else: return '}'

ok = True
stack = []
for i in range(N):
    if L[i] == ' ':
        continue
    elif (L[i] == '(' or L[i]  == '{' or L[i]  == '['):
        stack.append(L[i])
    else:
        if stack == [] or (stack and opposite(stack[-1]) != L[i]):
            print(L[i], i)
            ok = False
            break
        else:
            stack.pop()

if ok:
    print("ok so far")


