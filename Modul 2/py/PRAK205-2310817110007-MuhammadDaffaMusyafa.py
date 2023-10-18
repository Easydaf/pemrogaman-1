import math
tinggi = input("")
sisi_miring= input("")

alas = round(math.sqrt(int(sisi_miring) * int(sisi_miring) - int(tinggi) * int(tinggi)))

keliling = round(int(tinggi) + int(sisi_miring) + int(alas))

luas = round((int(tinggi) * int(alas)) / 2)

print(f"Alas ={alas} cm")
print(f"keliling ={keliling} cm")
print(f"luas = {luas} cm^2")