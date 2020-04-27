n = int(input())
cadenas = []
for i in range(n):
    cad = str(input())
    cadenas.append(cad)
if(cadenas == sorted(cadenas)):
    print("INCREASING")
    exit()
if(cadenas == sorted(cadenas,reverse=True)):
    print("DECREASING")
    exit()
print("NEITHER")
