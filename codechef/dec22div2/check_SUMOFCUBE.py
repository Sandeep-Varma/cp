from pwn import *

t = 1
print(t)

# p1 = process('./exec1')
# p2 = process('./exec2')

# p1.sendline(str(t).encode())
# p2.sendline(str(t).encode())

for i in range(t):
    # n = randint(2000,5000)
    n = 10000
    print(n)

    # p1.sendline(str(n).encode())
    # p2.sendline(str(n).encode())

    l = []
    for j in range(n):
        l.append(randint(1,1000001))
    B = ""
    for j in range(n):
        B = B + str(l[j]) + " "
    B = B[:-1]
    print(B)

    # p1.sendline(B.encode())
    # p2.sendline(B.encode())
    
    # ans1 = p1.recvline().decode("utf-8")
    # ans2 = p2.recvline().decode("utf-8")
    # ans2 = "0\n".encode()

    # if ans1 == ans2:
    #     print("Correct for test case:",i)
    # else:
    #     print(n)
    #     print(ans1,ans2)
    #     print(B)

# p1.close()
# p2.close()