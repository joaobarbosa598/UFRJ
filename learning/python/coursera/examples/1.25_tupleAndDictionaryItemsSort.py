# Os dicionários têm um método chamado items
# (atente-se à escrita deste método) que retorna uma
# lista de tuplas, em que cada tupla é um par de
# valores-chave:

d = {'b':10,'c':1,'a':22}
#t = list(d.items())
t = d.items()
print(t)

t = list(t)
print(t)

#[('b',10), ('c',1), ('a',22)]

# Como você deve esperar de um dicionário, os itens não
# estão em uma ordem específica. No entanto, como a 
# lista de tuplas é uma lista e as tuplas são comparáveis,
# agora podemos classificar a lista de tuplas.
# A conversão de um dicionário em uma lista de tuplas é uma
# maneira de gerar o conteúdo de um dicionário 
# classificado por chave:

t.sort()
print(t)
#t[('a',10), ('b',1), ('c',22)]
# A nova lista é classificada em ordem alfabética
# crescente pelo valor da chave.

"""output
dict_items([('b', 10), ('c', 1), ('a', 22)])
[('b', 10), ('c', 1), ('a', 22)]
[('a', 22), ('b', 10), ('c', 1)]
"""