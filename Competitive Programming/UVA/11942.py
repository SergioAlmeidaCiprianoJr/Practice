n = int(input())
print("Lumberjacks:")
for i in range(0,n):
	s = [ int(j) for j in input().split() ]
	m = 0
	M = 0
	for j in range(1, len(s)):
		if(s[j] > s[j-1]):
			M+=1
		if(s[j] < s[j-1]):
			m+=1
	print("Ordered") if (m == len(s)-1 or M == len(s)-1) else print("Unordered")
