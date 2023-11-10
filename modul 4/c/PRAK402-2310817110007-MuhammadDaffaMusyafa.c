#include <stdio.h>

int main(){
    int i;
    int j;
    int k;

    scanf("%d", &k);

    for ( i = 1; i <= k; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);
        }
    }
    printf("\n");
    for ( j = k; j > 0; j--)
    {
        if (j % 2 == 0)
        {
            printf("%d", j);
        }
    }
    
    return 0;
}