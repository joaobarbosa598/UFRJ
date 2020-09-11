# Use the file name mbox-short.txt as the file name
fname = input("Enter file name: ")
fh = open(fname)
num = 0
count = 0
for line in fh:
    if line.startswith("X-DSPAM-Confidence:"):
        pos = line.find(':')
        aux = line[pos+1:].strip()
        #print(aux)
        num += float(aux)
        count+=1
        
print("Average spam confidence:", num/count)
