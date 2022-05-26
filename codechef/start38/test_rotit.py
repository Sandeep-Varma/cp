from pwn import *

run = process('./a.out')
t = 1000
run.sendline(str(t).encode())

for i in range(t):
	n = randint(1,200000)
	run.sendline(str(n).encode())
	l = []
	for j in range(n):
		l.append(randint(1,1000000000))
	B = ""
	for j in range(n):
		B = B + str(l[j]) + " "
	r = randint(1,n)
	k = randint(0,r-1)
	A = ""
	for j in range(r-k,r):
		A = A + str(l[j]) + " "
	for j in range(r-k):
		A = A + str(l[j]) + " "
	for j in range(r,n):
		A = A + str(l[j]) + " "
	run.sendline(A.encode())
	run.sendline(B.encode())
	print(n,r,k)
	ans = run.recvline().decode("utf-8")
	if ans == str(k)+"\n":
		print("Correct\n")
	else:
		print(ans)
		print(A)
		print(B)
		break
run.close()