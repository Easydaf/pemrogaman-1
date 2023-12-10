import math
alas = 12
tinggi = 5
miring = round(math.sqrt(alas*alas + tinggi*tinggi))
keliling = round (alas+tinggi+miring)
luas = round (alas*tinggi/2)
print("diketahui :")
print(f"alas = {alas} cm")
print(f"tinggi = {tinggi} cm")
print(f"jawab : ")
print(f"sisi a = {alas} cm")
print(f"sisi b = {miring} cm")
print(f"sisi c = {tinggi} cm")
print(f"keliling = {keliling} cm")
print(f"luas = {luas} cm")