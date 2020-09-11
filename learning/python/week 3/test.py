palavra='preto'
palavra2 = 'bla nca'
d = dict()
for c in palavra2:
    if c not in d:
        d[c]= 1
    else:
        d[c]=d[c]+1


print(d)