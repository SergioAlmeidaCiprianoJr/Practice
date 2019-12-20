t = int(input())
for i in range(0,t):
	n, m = input().split()
	n = int(n)
	m = int(m)
	mapa = dict()
	for j in range(0,n):
		k = input()
		v = input()
		mapa[k] = v
	for j in range(0,m):
		k = input().split()
		for u in range(0,len(k)):
			if(u==len(k)-1):
				if k[u] in mapa:
					print(mapa[k[u]])
				else:
					print(k[u])
			else:
				if k[u] in mapa:
					print(mapa[k[u]], end=" ")
				else:
					print(k[u], end=" ")
	print()
