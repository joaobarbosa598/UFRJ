fname = input("Enter file name: ")
fh = open(fname)
lst = list()
for line in fh:
    lstAux = line.split()
    print(lstAux)
    for aux in lstAux:
        if aux not in lst:
            lst.append(aux)

lst.sort()
print(lst)
