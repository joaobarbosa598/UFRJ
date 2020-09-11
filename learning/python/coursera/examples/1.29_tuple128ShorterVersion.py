c = { 'a':10, 'b':1, "c":22}

print( sorted( [ (value,key) for key,value in c.items() ] ) )

#faz o mesmo do programa anterior em uma linha - o 1.28_tupleMostCommonWords.py -

"""output
[(1, 'b'), (10, 'a'), (22, 'c')]
"""