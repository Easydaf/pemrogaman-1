#include <stdio.h>

int main(){
    int x;int y;int i;int j;
    
    scanf("%d %d",&x, &y);

    if (x > y){
        for (i = x, j = y; i > y; i--,j++) {
            printf("%d %d -",i, j);
        }
    } else {
        for (i = x, j = y; i < y; i++, j--) {
            printf("%d %d - ",i, j);
        }
    }
    
    printf("%d %d \n",y, x);
    
    return 0;

}