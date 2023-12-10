#include <stdio.h>

int main(){
    int a = 400000;
    int b = 350000;
    int diskonA = 13;
    int diskonB = 21;
    int hasilA = a * diskonA / 100;
    int hasilB = b * diskonB / 100;
    printf("Harga sepatu a bernilai %d\n",a);
    printf("Harga sepatu b bernilai %d\n",b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi ");
    printf("%d \n",a - hasilA );
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi ");
    printf("%d \n",b - hasilB);
}