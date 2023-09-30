#include <stdio.h>

int main(){

    int sisi1 = 4, sisi2 = 5, sisi3 = 7;

    int total_keliling_segitiga = sisi1 + sisi2 + sisi3;

    int biaya_pemasangan_pagar = 85000;

    int biaya_keseluruhan = total_keliling_segitiga * biaya_pemasangan_pagar;
    
    printf("diketahui :\n");
    printf("panjang sisi segitiga berturut turut %d,%d, dan %d\n",sisi1, sisi2, sisi3);
    printf("keliling tanah pak Dengklek adalah %d\n",total_keliling_segitiga );
    printf("Harga tanah Per Meter adalah %d\n",biaya_pemasangan_pagar);
    printf("jawaban :\nBiaya yang diperlukan Pak Dengklek adalah : Rp%.3d",biaya_keseluruhan);
}