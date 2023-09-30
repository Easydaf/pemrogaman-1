#include <stdio.h>

int main(){
    float jarak_lingkaran = 14.0;
    int putaran = 5;
    float keliling_taman = jarak_lingkaran / putaran;
    float phi = 3.14;
    float jarijari = keliling_taman / (2 * phi);

    printf("diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n",putaran);
    printf("Jarak tempuh Pak Dengklek = %.0fKm\n\n",jarak_lingkaran );
    printf("jawaban :\n Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2fKm",jarijari);
}