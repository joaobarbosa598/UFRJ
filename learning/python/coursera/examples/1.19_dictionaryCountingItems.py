counts = dict()
names = ['csev', 'cwen', 'zqian','cwen']

for name in names:
    if name not in counts:
        counts[name] = 1
    else:
        counts[name] = counts[name] + 1

print(counts)

# get retorna o valor contido na chave desse dicionario, 
# case nao tenha a chave, ele retorna 0 por padrao
counts2 = dict()
for name in names:
    counts2[name] = counts2.get(name,0) + 1

print(counts2)