t = int(input())
for i in range(t):
    x = input()
    n = int(input())
    suma = 0
    for j in range(n):
        aux = input()
        suma += int(aux);
    if(suma%n == 0):
        print("YES")
    else:
        print("NO")
