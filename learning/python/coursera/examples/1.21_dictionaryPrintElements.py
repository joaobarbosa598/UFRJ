counts = { 'chuck' : 1, 'fred' : 42, 'jan' : 100}
for key in counts:
    print(key, counts[key])


print(list(counts))
print(counts.keys())
print(counts.values())
print(counts.items())


for keys,values in counts.items():
    print(keys,values)


"""output
chuck 1
fred 42
jan 100
['chuck', 'fred', 'jan']
dict_keys(['chuck', 'fred', 'jan'])
dict_values([1, 42, 100])
dict_items([('chuck', 1), ('fred', 42), ('jan', 100)])
chuck 1
fred 42
jan 100
"""