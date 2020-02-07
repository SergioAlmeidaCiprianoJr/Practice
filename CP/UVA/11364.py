n = int(input())
for i in range(0, n):
	input()
	arr = [int(x) for x in input().split()]
	print(2*(max(arr)-min(arr)))
