d = dict()
d['csev'] = 2
d['cwen'] = 4
for (k,v) in d.items():
    print(k,v)

#tups = tuple()
tups = d.items()
print(tups)
print(list(tups))

# The items() method in dictionary returns a 
# list of (key,value) tuples

"""output
csev 2
cwen 4
dict_items([('csev', 2), ('cwen', 4)])
[('csev', 2), ('cwen', 4)]
"""