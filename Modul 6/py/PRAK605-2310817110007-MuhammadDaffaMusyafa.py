import numpy as np

ordo = int(input())

matriksA = np.zeros((ordo, ordo), dtype=int)
print("Matriks A")
for i in range(ordo):
    matriksA[i] = list(map(int, input().split()))

matriksB = np.zeros((ordo, ordo), dtype=int)
print("Matriks B")
for i in range(ordo):
    matriksB[i] = list(map(int, input().split()))

hasil_kali = np.dot(matriksA, matriksB)

print("Matriks AxB")
for row in hasil_kali:
    print(" ".join(map(str, row)))