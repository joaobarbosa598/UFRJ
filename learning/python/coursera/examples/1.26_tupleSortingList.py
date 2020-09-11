# Como as tuplas são imutáveis, elas não fornecem 
# métodos como sort e reverse, o que modifica as listas
# existentes. No entanto, o Python fornece as funções 
# internas sorted and reversed, que usam qualquer 
# sequência como parâmetro e retornamuma nova sequência
# com os mesmos elementos em uma ordem diferente

d = {'b':10, 'c':1, 'a':22}
print(d.items())
print(sorted(d.items()))
print(sorted(d.items(), reverse=True))

#ou

aux = d.items()
print(aux)
aux = list(aux)
print(aux)
aux.sort()
print(aux)

"""output
dict_items([('b', 10), ('c', 1), ('a', 22)])
[('a', 22), ('b', 10), ('c', 1)]
[('c', 1), ('b', 10), ('a', 22)]
dict_items([('b', 10), ('c', 1), ('a', 22)])
[('b', 10), ('c', 1), ('a', 22)]
[('a', 22), ('b', 10), ('c', 1)]
"""