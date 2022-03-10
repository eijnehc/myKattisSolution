modulo = []
for _ in range(10):
    value = int(input()) % 42
    if value not in modulo:
        modulo.append(value)
print(len(modulo))
