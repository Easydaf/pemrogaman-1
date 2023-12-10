#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, luas, keliling;
    scanf("%d %d", &a, &b);

    c = sqrt((b * b) - (a * a));
    keliling = a + b + c;
    luas = (a * c) / 2;



    printf("Alas: %d cm\n", c);
    printf("Tinggi: %d cm\n", a);
    printf("keliling: %d cm\n", keliling);
    printf("luas: %d cm^2\n", luas);

    return 0;
}