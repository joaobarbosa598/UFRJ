name = input("Enter file:")
if len(name) < 1 : name = "mbox-short.txt"
handle = open(name)
myDict = dict()
for line in handle:
    if line.startswith('From '):
        #print(line.split()[5][:2])
        #pos = line.find(':')
        #myDict[line[pos-2:pos]] = myDict.get(line[pos-2:pos],0)+1
        myDict[ line.split()[5][:2] ] = myDict.get(line.split()[5][:2],0)+1
        
for key, value in sorted( myDict.items() ):  
    print(key, value)   
#print(myDict)        
        
                         

"""output
Enter file:mbox-short.txt
04 3
06 1
07 1
09 2
10 3
11 6
14 1
15 2
16 4
17 2
18 1
19 1
{'09': 2, '18': 1, '16': 4, '15': 2, '14': 1, '11': 6, '10': 3, '07': 1, '06': 1, '04': 3, '19': 1, '17': 2}
"""