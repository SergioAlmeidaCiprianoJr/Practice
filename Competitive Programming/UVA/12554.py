n = int(input())
arr = []
v = ["Happy", "birthday", "to", "you", "Rujia"]

for i in range(0, n):
	arr.append(input() + ": ") 

cont = 0
for i in range(0, n):
	print(arr[i]+v[i%4]) if(cont!=11) else print(arr[i]+v[-1])
	cont+=1
	cont%=16

j = 0
for i in range(cont, 16):
	print(arr[j]+v[i%4]) if(i!=11) else print(arr[j]+v[-1])
	j+=1
	j%=n
