n = int(input())
for i in range(0, n):
	s = input()
	for j in range(int(len(s)/2-1), (-1)*int(len(s)/2+1), -1):
		print(s[j], end="")
	print()
