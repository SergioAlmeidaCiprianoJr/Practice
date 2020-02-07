n,m = input().split()
n = int(n)
m = int(m)
mapa = dict()
 
for i in range(0, n):
	s = input()
	t = input()
	mapa[s] = t
 
for i in range(0,m):
	r = input().split()
	vez = 0
	for u in r:
		if(vez!=0):
			print(" ", end="")
		vez+=1
		if(u in mapa):
			print(mapa[u], end="")
		else:
			print(u, end="")
	print()
