data = "From stephen.marquar@uct.ac.za Sat Jan 5 09:14:16 2008"
atpos= data.find("@")
print(atpos)

sppos = data.find(" ", atpos)
print(sppos)

host = data[atpos+1 : sppos]
print(host)


"""output
20
30
uct.ac.za
"""