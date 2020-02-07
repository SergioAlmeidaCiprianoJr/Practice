n = int(input())
for i in range(0, n):
	x,y = [ int(j) for j in input().split() ]
	if(x==y):
		print("=")
	elif(x>y):
		print(">")
	else:
		print("<")
