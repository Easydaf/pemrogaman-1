#include <stdio.h>

int main(){
    float angka1;
    float angka2;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &angka1);
    printf("Masukkan Nilai kedua : ");
    scanf("%f", &angka2);
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",angka1,angka2, angka1+angka2);

return 0;
}