from pwn import *
from math import lcm

def correct_ans(n:int):
    m = n-1
    a1 = 1
    for a in range(1,int((n+2)/2)):
        if (lcm(a,n-a) < m):
            a1 = a
            m = lcm(a,n-a)
    return str(a1)+" "+str(n-a1)+"\n"

start = 18000000
end   = start + 100

bruteforcer = process('./exec')
bruteforcer.sendline(str(end-start).encode())

for i in range(start,end):
    bruteforcer.sendline(str(i).encode())
    response = bruteforcer.recvline(timeout=1)
    if (response.decode("utf-8") == correct_ans(i)):
        print(i)
    else:
        print("Wrong for",i)
        print("Correct ans:",correct_ans(i))
        print("Your ans:",response.decode("utf-8"))
        break

bruteforcer.close()
