def Biodata(TahunLahir, Namaku, Asal):
    tahun_sekarang = 2023
    umur = tahun_sekarang - TahunLahir
    print("Perkenalkan Nama Saya : ", Namaku)
    print("Umur saya : ",umur)
    print("Saya Adalah Angkatan : ", tahun_sekarang)
    print("Asal Saya dari : ", Asal)
    
TahunLahir = int(input("Tahun Lahir : "))
Namaku = input("Namaku : ")
Asal = input("Asal : ")

Biodata(TahunLahir, Namaku, Asal)