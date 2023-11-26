def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

batas = int(input(""))
maks = -100000
minim = 100000

nilai_input = input("")
nilai_list = list(map(int, nilai_input.split()))

batas_input = 0
while batas_input < batas:
    nilai = nilai_list[batas_input]
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas_input += 1

print(f"{maks} {minim}")