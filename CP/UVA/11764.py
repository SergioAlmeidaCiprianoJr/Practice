n = int(input())
for i in range(0,n):
	m = int(input())
	arr = [ int(k) for k in input().split() ]
	h = l = 0
	for k in range(1, len(arr)):
		if arr[k] > arr[k-1]:
			h+=1
		elif arr[k] < arr[k-1]:
			l+=1
	print("Case " + str(i+1) + ": " + str(h) + " " + str(l))
