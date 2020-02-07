i = 0
while(1):
	i+=1
	n = input()
	if(n == '#'):
		break
	print("Case " + str(i) + ": ", end="")
	if(n == "HELLO"):
		print("ENGLISH")
	elif(n == "HOLA"):
		print("SPANISH")
	elif(n == "HALLO"):
		print("GERMAN")
	elif(n == "BONJOUR"):
		print("FRENCH")
	elif(n == "CIAO"):
		print("ITALIAN")
	elif(n == "ZDRAVSTVUJTE"):
		print("RUSSIAN")
	else:
		print("UNKNOWN")
