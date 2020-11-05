N = int(input())

keywords = set()

for _ in range(N):
    keyword = input().lower()
    transformKeyword = keyword.replace("-", " ")
    keywords.add(transformKeyword)
    # print(transformKeyword)

print(len(keywords))
