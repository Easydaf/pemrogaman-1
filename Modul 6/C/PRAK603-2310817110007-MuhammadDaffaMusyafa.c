#include <stdio.h>

int main(){
    int n1,n2,isi,kali;
    scanf("%d %d",&n1, &n2);
    int y[n1], x[n2];
    if (n1 == n2)
    {
        for (int i = 0; i < n1; i++)
        {
            scanf("%d", &isi);
            y[i]=isi;
        }
        for (int i = 0; i < n2; i++)
        {
            scanf("%d",&isi);
            x[i]=isi;
        }
        for (int i = 0; i < n1; i++)
        {
            kali = y[i]*x[i];
            printf("%d ",kali);
        }
       
        }
    else
    {
        printf("Jumlah tidak sama");
    }
        
    }