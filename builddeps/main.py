import sys

def dfs(u):
    global topSort, AL, vis
    vis.add(u)
    for v in AL[u]:
        if v not in vis:
            dfs(v)
            # topSort.append(v)
    topSort.append(u)


n = int(input())

AL = dict() # a dictionary of file to its dependecies

for _ in range(n):
    files_in_a_line = input().split()
    f = files_in_a_line[0][:-1]
    dep = files_in_a_line[1:]
    # print(f, dep)
    if not f in AL:
        AL[f] = []
    for d in dep:
        # print(d, "->", f)
        if not d in AL:
            AL[d] = [f]
        else:
            AL[d].append(f)

topSort = []
sys.setrecursionlimit(10**6)
vis = set()
dfs(input())
# print(AL)
topSort.reverse()

print(*topSort, sep="\n")

