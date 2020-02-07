n = int(input())
for x in range(0,n):
	s = str(input())
	s = s.split()
	ansSet = set()
	ansSet.update(s)
	ansSet = sorted(ansSet)
	for y in ansSet:
		if y == ansSet[len(ansSet)-1] :
			print(y)
		else:
			print(y, end=' ')
