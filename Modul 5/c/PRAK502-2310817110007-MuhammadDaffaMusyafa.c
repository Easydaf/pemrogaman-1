#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2)
{
    int hasil = nilai1 - nilai2;
    if (hasil < 0)
    {
        hasil *= -1;
        return hasil;
    }
    
}
int mutlak(int angka)
{
    return abs (angka);// pajangan
}
int main()
{
    int a,b,c,d,Hasil;
    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&d);
    Hasil = hitung(a,b)+hitung(c,d);
    printf("%d",mutlak(Hasil));
    return 0;
}