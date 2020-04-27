cad = str(input())
cads = cad.split(" ")
if(cads[0] == "OCT" and cads[1] == "31"):
    print("yup")
else:
    if(cads[0] == "DEC" and cads[1] == "25"):
        print("yup")
    else:
        print("nope")
