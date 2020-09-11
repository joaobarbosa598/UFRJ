# Uma simples ordenação ascendente é muito fácil:
# apenas chame a função sorted().
# Isso retornará uma nova lista ordenada:
# Você também pode utilizar o método list.sort(). 
# Isso modifica a lista em si (e retorna None para 
# evitar confusão). Usualmente este método é menos 
# conveniente que a função sorted() - mas se você não 
# precisará da lista original, esta maneira é levemente 
# mais eficiente.

c = { 'a':10, 'b':1, 'c':22}
temp = list()
for key, value in c.items():
    temp.append( (value,key) )

print(temp)

temp = sorted(temp, reverse=True)
print(temp)


# Outra diferença é que o método list.sort() é 
# aplicável apenas às listas. Em contrapartida, a 
# função sorted() aceita qualquer iterável.