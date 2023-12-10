#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    int matriks[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b);
        matriks[i] = b;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", matriks[i]* (i+1));
    }
    
}