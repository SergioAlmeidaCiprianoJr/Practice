while(1):
	m, p, t, it = [ float(j) for j in input().split() ]
	m = int(m)
	it = int(it)
	if(m<0):
		break
	month = [-1] * (m+5)
	for i in range(0,it):
		j, month[int(j)] = input().split()
		month[int(j)] = float(month[int(j)])
	for i in range(1,m):
		if(month[i] == -1):
			month[i] = month[i-1]
	k = 0
	car = (t+p)*(1-month[0])
	p = t/m
	while(car<t):
		k+=1
		t-=p
		car-=car*month[k]
	if(k==1):
		print("1 month")
	else:
		print(str(k) + " months")
