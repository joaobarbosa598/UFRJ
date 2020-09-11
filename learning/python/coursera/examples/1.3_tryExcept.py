total = 0.0
num = 0
while True:
	val = input("Enter a value: ")
	if (val == 'done'):
		break
	try:
		val = float(val)
	except Exception as e:
		print("Invalid input")
		continue

	num = num+1
	total = total+val

print(total,num,total/num)