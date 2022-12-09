
for a in range(4):
    for b in range(4):
        for c in range(8):
            sol_x = -1
            for x in range(16):
                if ((a^x)+(b^x)==c^x):
                    sol_x = x
                    break
            print(a,b,c,sol_x)
