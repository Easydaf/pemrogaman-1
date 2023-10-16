a, b, i, j, x, y = input("").split(" ")


hasil =(int(a) - int(b)) * int(i) / int(j) - (int(x) + int(y))
hasil_bulat = round(hasil,3)

print(hasil_bulat)