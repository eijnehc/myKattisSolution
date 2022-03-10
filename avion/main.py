blimps = []
for i in range(5):
    code = input()
    if "FBI" in code:
        blimps.append(i+1)

if blimps:
    print(*blimps)
else:
    print("HE GOT AWAY!")
