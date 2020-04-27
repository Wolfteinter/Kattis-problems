conjunto = [1,1,2,2,2,8]
a = list(map(int,str(input()).split(" ")))
a = [x1 - x2 for (x1, x2) in zip(conjunto, a)]
for i in a:
    print(i,end=" ")
