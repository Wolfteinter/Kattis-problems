n = int(input())
l = int(input())
x = int(input())
flag = True
for i in range(n,l+1):
    suma = sum(list(map(int,str(i))))
    if(suma == x):
        res2 = i
        if(flag):
            res = i
            flag = False
print(res)
print(res2)
