#These functions do not modify the original string, instead they return a new string that has been altered
greet = "Hello Bob"
zap = greet.lower()
print(zap)

print(greet)

print("Hi There".lower())


x = 'From marquard@uct.ac.za'
print(x[14:17])


data = 'From stephen.marquard@uct.ac.za Sat Jan  5 09:14:16 2008'
pos = data.find('.')
print(data[pos:pos+3])


text = "X-DSPAM-Confidence:    0.8475";

pos = text.find('0.8475')
num = float(text[pos:pos+6])
print(num)

"""output
hello bob
Hello Bob
hi there
uct
.ma
0.8475
"""