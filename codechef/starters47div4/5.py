m = int(input())

for i in range(m):
    n = int(input())
    l = input().split()
    l = [int(j) for j in l]
    for j in range(len(l)):
        if l[j] == 1:
            x = j
        if l[j] == n:
            y = j
    if x<y:
        print(x+n-1-y)
    else:
        print(x+n-2-y)