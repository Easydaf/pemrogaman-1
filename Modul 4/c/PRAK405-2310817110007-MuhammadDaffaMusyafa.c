#include <stdio.h>

int main(){
    int x;int y;int i;int j;
    //baris dan kelipatan
    scanf("%d %d",&x, &y);

    int hasil = 0;

    for (i = 1; i <= x; i++)//untuk mencetak baris
    {
        int total = 0;
        for (j = i; j >= 1; j--)//untuk mencetak kelipatan
        {
            int perkalian_kelipatan = j * y;
            printf("(%d * %d)", j, y);
            total += perkalian_kelipatan;
            if (j > 1)
            {
                printf(" + ");
            }
            
        }
        printf(" = %d\n", total);
        hasil += total; 
    
    }

    printf("%d\n", hasil);

    return 0;
}