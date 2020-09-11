##dictionary
lst = list()
lst.append(21)
lst.append(183)
print(lst)

#changing an element
lst[0] = 23
print(lst)


ddd = dict()
ddd['bge'] = 21
ddd['course'] = 182
ddd['aaa'] = 2
print(ddd)

#changing an element
ddd['bge'] = 23
print(ddd)

#adding an element
ddd['course'] = ddd['course'] + 8
print(ddd)


"""output
[21, 183]
[23, 183]
{'age': 21, 'course': 182}
{'age': 23, 'course': 182}
{'age': 23, 'course': 190}
"""