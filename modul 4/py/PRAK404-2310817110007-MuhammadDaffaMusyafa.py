while True:
    print("Pilihan program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Keluar")

    pilihan = int(input("Masukkan pilihan Anda: "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator ini")
        break
    elif pilihan > 5 or pilihan < 1:
        print("Pilihan Anda salah, silakan coba lagi.")
        continue

    bilangan1 = float(input("Masukkan nilai pertama: "))
    bilangan2 = float(input("Masukkan bilangan kedua: "))

    if pilihan == 1:
        hasil = bilangan1 + bilangan2
        print(f"Hasil penjumlahan antara {bilangan1:.2f} dan {bilangan2:.2f} adalah {hasil:.2f}")
    elif pilihan == 2:
        hasil = bilangan1 - bilangan2
        print(f"Hasil pengurangan antara {bilangan1:.2f} dan {bilangan2:.2f} adalah {hasil:.2f}")
    elif pilihan == 3:
        hasil = bilangan1 * bilangan2
        print(f"Hasil perkalian antara {bilangan1:.2f} dan {bilangan2:.2f} adalah {hasil:.2f}")
    elif pilihan == 4:
        if bilangan2 != 0:
            hasil = bilangan1 / bilangan2
            print(f"Hasil pembagian antara {bilangan1:.2f} dan {bilangan2:.2f} adalah {hasil:.2f}")
        else:
            print("Pembagian dengan nol tidak diizinkan.")
