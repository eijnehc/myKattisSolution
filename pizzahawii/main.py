t = int(input())

for _ in range(t):
    pizza = int(input())
    fgn_nat = dict()
    nat_fgn = dict()
    for _ in range(pizza):
        pizzaName = input()
        foreignIngredients = input().split()[1:]
        nativeIngredients = input().split()[1:]

        for word in foreignIngredients:
            native = set(nativeIngredients)
            if word in fgn_nat:
                fgn_nat[word] = fgn_nat[word].intersection(native)
            else:
                fgn_nat[word] = native

        for word in nativeIngredients:
            foreign = set(foreignIngredients)
            if word in nat_fgn:
                nat_fgn[word] = nat_fgn[word].intersection(foreign)
            else:
                nat_fgn[word] = foreign
        # print(nat_fgn)
        # print('-----------')
    keys = list(fgn_nat.keys())
    keys.sort()

    for k in keys:
        combi = []
        for i in fgn_nat[k]:
            if k in nat_fgn[i]:
                combi.append(i)
        combi.sort()
        for m in combi:
            print('(' + k + ', ' + m + ')')

    print()
