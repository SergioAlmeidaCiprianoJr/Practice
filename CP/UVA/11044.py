n = int(input());
for i in range(0, n):
	l,c = [ int(j) for j in input().split() ]
	print((l//3) * (c//3))
