n = int(input())
for i in range(0, n):
	ans = 1
	num = int(input())
	if(num==1):
		print("1 nao eh perfeito")
		continue
	for j in range(2, num):
		if(num%j==0):
			ans+=j
	if(ans==num):
		print(str(num) + " eh perfeito")
	else:
		print(str(num) + " nao eh perfeito")
