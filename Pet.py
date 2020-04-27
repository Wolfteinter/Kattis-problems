maxx = float("-inf")
maxi = None
for i in range(5):
    x = sum(map(int,str(input()).split(" ")))
    if(x>maxx):
        maxx = x
        maxi = i + 1
print(maxi,maxx)
