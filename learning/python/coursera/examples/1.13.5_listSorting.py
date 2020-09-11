friends = list()
friends.append('Sally')
friends.append('Joseph')
friends.append('Glenn')

print(friends)
#A maioria dos métodos para lista é do tipovoid;
# eles modificam a lista e retornam None. 
# Se você acidentalmente escrevert = t.sort(), 
# você se desapontará com o resultado.
#friends = friends.sort()   //esta errado, sort retorna none caso tenha sucesso
friends.sort()
print(friends)
