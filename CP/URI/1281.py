n = int(input())
for x in range(0, n):
	m = int(input())
	mapa = dict()
	for y in range(0, m):
		fruit, price = input().split()
		mapa[fruit] = price
	m = int(input())
	ans = 0
	for y in range(0, m):
		fruit, quant = input().split()
		if fruit in mapa:
			ans = ans + int(quant)*float(mapa[fruit])
	ans = round(ans, 2)
	print("R$", end=" ")
	print("{:.2f}".format(ans));
