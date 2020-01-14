n = int(input())
for i in range(0, n):
	ans = int(input())
	ans = int(((ans*567/9+7492)*235/47-498)/10)
	ans = -ans%10 if (ans<0) else ans%10
	print(ans)
