n = int(input())
li = list()
for i in range(n):
    index = int(input())
    li.append(index)

li.sort()

for i in range(n):
    print(li[i])

