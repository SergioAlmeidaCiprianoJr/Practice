for i in range(0, 210):
	x,y = [ int(j) for j in input().split() ]
	if(x == -1 and y == -1):
		break;
	print(min(abs(y-x), abs(100-max(y,x)+min(x,y))))
