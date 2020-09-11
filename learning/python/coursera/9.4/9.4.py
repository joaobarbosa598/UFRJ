name = input("Enter file:")
if len(name) < 1 : name = "mbox-short.txt"
handle = open(name)

people = dict()
for line in handle:
    if line.startswith('From '):
        aux = line.split()
        people[aux[1]] = people.get(aux[1],0) + 1
        
bigcount = None
bigword = None
for word,count in people.items():
    if bigcount is None or count > bigcount:
        bigword = word
        bigcount = count

print(bigword, bigcount)
        
