cad = str(input())
cads = cad.split(' ')
exist = []
for i in cads:
    if(i in exist):
        print("no")
        exit()
    else:
        exist.append(i)
print("yes")
