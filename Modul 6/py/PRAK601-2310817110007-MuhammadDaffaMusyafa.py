a, b = map(int, input().split())
matriks = []
isi_matriks = list(map(int, input().split()))
for i in range(a):
    matriks.append(isi_matriks[i * b : (i + 1) * b])

for mengulang in matriks:
    print(*mengulang)
