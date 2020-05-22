from math import cos,sin,degrees,radians,sqrt,pow
def calxy(x,y,angle,magn):
    x1,y1 = x,y
    x1 += magn * cos(radians(angle))
    y1 += magn * sin(radians(angle))
    return x1,y1

while(True):
    n = int(input())
    if(n == 0):
        exit()
    else:
        dists = []
        px = 0
        py = 0
        for i in range(n):
            line = str(input())
            lines  = line.split(" ")
            xi,yi = float(lines[0]),float(lines[1])
            lines = lines[2:]
            angle = 0
            t = 0
            while(t < len(lines)):
                accion = lines[t]
                if(accion == "start"):
                    angle += float(lines[t+1])
                elif(accion == "turn"):
                    angle += float(lines[t+1])
                elif(accion == "walk"):
                    xi,yi = calxy(xi,yi,angle,float(lines[t+1]))
                t += 2
            px += xi / n
            py += yi / n
            dists.append([xi,yi])
        maxdist = 0
        for x,y in dists:
            dist = sqrt(pow(px - x,2) + pow(py - y,2))
            maxdist = max(maxdist,dist)
        print("{:.6f} {:.6f} {:.6f}".format(px,py,maxdist))
