while(1):
	n = int(input())
	if(not n):
		break
	x0,y0 = [int(j) for j in input().split()]
	for i in range(0, n):
		x,y = [int(j) for j in input().split()]
		if(x == x0 or y == y0):
			print("divisa")
		elif(x > x0 and y > y0):
			print("NE")
		elif(x < x0 and y < y0):
			print("SO")
		elif(x > x0 and y < y0):
			print("SE")
		else:
			print("NO")
