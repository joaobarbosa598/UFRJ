def addtwo(a, b):
    added = a + b
    return a

x = addtwo(2, 7)
print(x)


def greet(lang):
    if lang == 'es':
        return 'Hola'
    elif lang == 'fr':
        return 'Bonjour'
    else:
        return 'Hello'

print(greet('fr'),'Michael')


"""output
2
Bonjour Michael
"""