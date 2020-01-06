c1,c2,c3,c4 = input().split()
c1 = int(c1)
c2 = int(c2)
c3 = int(c3)
c4 = int(c4)

if(c1*c2 == c3*c4):
	print(0)
elif(c1*c2 < c3*c4):
	print(1)
else:
	print(-1)
