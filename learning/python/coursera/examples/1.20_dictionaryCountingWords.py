# Dicionários possuem um método chamado get que recebe 
# uma chave e um valor padrão. Se a chave estiver contida 
# no dicionário,get retorna o valor correspon-dente; 
# caso contrário, retorna o valor padrão. 

counts = dict()
line = 'the clown ran after the car and the car ran into the tend and the tend fell down on the clown and the car'
words = line.split()

print('Words:', words)
print('Counting...')

for word in words:
    counts[word] = counts.get(word,0) + 1

print('Counts', counts)

bigcount = None
bigword = None
for word,count in counts.items():
    if bigcount is None or count > bigcount:
        bigword = word
        bigcount = count

print(bigword, ':', bigcount)




"""output
Words: ['the', 'clown', 'ran', 'after', 'the', 'car', 'and', 'the', 'car', 'ran', 'into', 'the', 'tend', 'and', 'the', 'tend', 'fell', 'down', 'on', 'the', 'clown', 'and', 'the', 'car']
Counting...
Counts {'the': 7, 'clown': 2, 'ran': 2, 'after': 1, 'car': 3, 'and': 3, 'into': 1, 'tend': 2, 'fell': 1, 'down': 1, 'on': 1}
the : 7
"""