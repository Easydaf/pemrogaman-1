#include <stdio.h>

int main() {
    int pilihan;
    float bilangan1;
    float bilangan2;
    float hasil;

    while (1) {
        printf("Pilihan program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. exit\n");

        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator ini\n");
            break;
        }
        else if(pilihan > 5 || pilihan < 1) {
            printf("Pilihan Anda salah, silakan coba lagi.\n");
            continue;
        }
        printf("Masukkan nilai pertama: ");
        scanf("%f", &bilangan1);
        printf("Masukkan bilangan kedua: ");
        scanf("%f", &bilangan2);

        if (pilihan == 1) {
            hasil = bilangan1 + bilangan2;
            printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f\n", bilangan1, bilangan2, hasil);
        } else if (pilihan == 2) {
            hasil = bilangan1 - bilangan2;
            printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f\n", bilangan1, bilangan2, hasil);
        } else if (pilihan == 3) {
            hasil = bilangan1 * bilangan2;
            printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f\n", bilangan1, bilangan2, hasil);
        } else if (pilihan == 4) {
            if (bilangan2 != 0) {
                hasil = bilangan1 / bilangan2;
                printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f\n", bilangan1, bilangan2, hasil);
            } else {
                printf("Pembagian dengan nol tidak diizinkan.\n");
            }
        } 
    }

    return 0;
}