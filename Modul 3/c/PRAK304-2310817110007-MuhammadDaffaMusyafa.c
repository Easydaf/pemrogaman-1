#include <stdio.h>

int main(){
    int b;
    scanf("%d", &b);
    if (b == 0)
    {
       printf("nol");
    }
    else if (b >= 1 && b <= 9)
    {
        printf("satuan");
    }
    else if (b >= 10 && b <= 19)
    {
        printf("puluhan");
    }
    else if (b >= 20 && b <= 99)
    {
        printf("puluhan");
    }
    else if (b >= 100)
    {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    
    return 0;
}