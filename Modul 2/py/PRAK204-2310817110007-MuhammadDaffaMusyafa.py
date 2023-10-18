pi = 3.142857
jari_jari = input("")
tinggi = input("")
volume = float(round(pi * int(jari_jari) * int(jari_jari) * int(tinggi),2))
luas = float(round(2 * pi * int(jari_jari) * int(jari_jari) + 2 * pi * int(jari_jari) * int(tinggi),2))
keliling = float(round(pi * 2 * int(jari_jari),2))

print("Volume = %.2f" % (volume))
print("Luas = %.2f" % (luas))
print("Keliling = %.2f" % (keliling))
