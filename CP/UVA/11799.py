n = int(input())
for i in range(0, n):
	x = [ int(j) for j in input().split() ]
	print("Case " + str(i+1) + ": " + str(max(x)))
