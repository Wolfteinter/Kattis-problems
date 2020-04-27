lista = [1,2,4,5]
def actuar(n):
    lista2 = lista.copy()
    lista2.append(n)
    return lista2
print(actuar(3))
print(actuar(6))
