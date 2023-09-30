#include <stdio.h>
#include <math.h>
int main(){
    int alas = 5.0;
    int tinggi = 12.0;
    int sisi_miring = (alas * alas) + (tinggi * tinggi) ;
    int hasil_sisi_miring = sqrt(sisi_miring);
    int keliling_segitiga = alas + tinggi + hasil_sisi_miring;
    int luas_segitiga = alas * tinggi / 2;
    printf("diketahui :\n alas = %d\n tinggi = %d\n\n",alas , tinggi);
    printf("jawab :\n sisi A = %d\n sisi B = %d\n sisi C = %d\n",alas , hasil_sisi_miring , tinggi);
    printf("keliling = %d\n",keliling_segitiga);
    printf("luas = %d",luas_segitiga);
}