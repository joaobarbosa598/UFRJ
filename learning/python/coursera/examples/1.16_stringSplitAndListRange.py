#split returns a list
abc = 'With three words'
stuff = abc.split()
print(abc)
print(stuff)

line = 'first;second;third'
thing = line.split()
print(thing)
thing = line.split(';')
print(thing)


x = list(range(5))
print(x)

""""output
With three words
['With', 'three', 'words']
['first;second;third']
['first', 'second', 'third']
[0, 1, 2, 3, 4]
"""