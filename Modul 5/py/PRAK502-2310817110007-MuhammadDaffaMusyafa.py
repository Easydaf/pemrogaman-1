def hitung(nilai1, nilai2):
    hasil = nilai1 - nilai2
    if hasil < 0:
        hasil *= -1
    return hasil

def mutlak(angka):
    return abs(angka)

a,c,b,d = map(int,input().split( ))

hasil = hitung(a, b) + hitung(c, d)
print(mutlak(hasil))