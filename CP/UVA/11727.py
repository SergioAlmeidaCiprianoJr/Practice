n = int(input())
for i in range(0, n):
	x,y,z = [ int(j) for j in input().split() ]
	m = min(x,y,z)
	M = max(x,y,z)
	print("Case " + str(i+1) + ": ", end="")
	if(z != m and z != M):
		print(z)
	elif(y != m and y != M):
		print(y)
	else:
		print(x)
