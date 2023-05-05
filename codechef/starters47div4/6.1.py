m = int(input())

for i in range(m):
    n = int(input())
    l = input().split()
    l = [int(j) for j in l]
    l2 = []
    for j in l:
        if l.count(j) == 1:
            l2.append(j)
    print(int((len(l2)+1)/2))