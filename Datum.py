meses = [
["Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"],
["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"],
["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"],
["Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"],
["Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"],
["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"],
["Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"],
["Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"],
["Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday","Monday"],
["Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"],
["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"],
["Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday","Monday"]]
valor = str(input())
d,m = map(int,valor.split(" "))
print(meses[m-1][d%7 -1])
