#include <stdio.h>

int main(){
    int x;int y;int a;int b;
    
    scanf("%d %d",&x, &y);

    if (x > y){
        for (a = x, b = y; a > y; a--,b++) {
            printf("%d %d -",a, b);
        }
    } else {
        for (a = x, b = y; a < y; a++, b--) {
            printf("%d %d - ",a, b);
        }
    }
    
    printf("%d %d \n",y, x);
    
    return 0;

}