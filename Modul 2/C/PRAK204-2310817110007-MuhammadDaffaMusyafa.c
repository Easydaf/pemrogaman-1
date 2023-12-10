#include <stdio.h>
#include <math.h>

int main(){
    float jari_jari;
    float tinggi;
    float phi = 3.142857;
    scanf("%f %f", &jari_jari, &tinggi);
    printf("Volume=%.2f\n", (phi * jari_jari * jari_jari * tinggi));
    printf("Luas=%.2f\n", (2 * phi * (jari_jari * jari_jari) + 2 * phi * jari_jari * tinggi));
    printf("Keliling=%.2f\n", (phi * 2 * jari_jari));

    return 0;
}