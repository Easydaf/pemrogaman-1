pesan1 = input()
pesan2 = input()

i = 0
j = 0
asterik = 0
hash = 0

while i < len(pesan1) and j < len(pesan2):
    if pesan1[i] == ' ' and pesan2[j] == ' ':
        i += 1
        j += 1
        continue
    if pesan1[i] == pesan2[j]:
        asterik += 1
    else:
        hash += 1

    i += 1
    j += 1

panjang_pesan1 = len(pesan1)
panjang_pesan2 = len(pesan2)

if panjang_pesan1 == panjang_pesan2:
    print("\n* =", asterik)
    print("# =", hash)
    if asterik >= hash:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
else:
    print("Panjang kalimat berbeda, pesan palsu")
