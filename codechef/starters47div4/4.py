n = int(input())

for i in range(n):
    a = int(input())
    if a<7:
        if a%2 == 1:
            print("NO")
        else:
            print("YES")
    else:
        print("YES")