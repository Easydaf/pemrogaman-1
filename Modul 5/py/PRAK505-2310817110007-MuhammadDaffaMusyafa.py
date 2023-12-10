def Biodata(TahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - TahunLahir
    print("Perkenalkan Nama Saya : ", Namaku)
    print("Umur saya : ",umur)
    print("Saya Adalah Angkatan : ", tahun_sekarang)
    print("Asal Saya dari : ", Asal)
    
TahunLahir = int(input(""))
Namaku = input("")
Asal = input("")

Biodata(TahunLahir, Namaku, Asal)