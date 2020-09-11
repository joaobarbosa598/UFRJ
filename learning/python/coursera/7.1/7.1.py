# Use words.txt as the file name
fname = input("Enter file name: ")

try:
	fh = open(fname)
except:
    print("Invalid file name entered")
    quit()


myStr = fh.read()
print(myStr.upper().strip())
