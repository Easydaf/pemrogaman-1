#include <stdio.h>

int main(){
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    printf("variable a bernilai %d\n",a);
    printf("variable b bernilai %d\n",b);
    printf("variable x bernilai %d\n",x);
    printf("variable y bernilai %d\n",y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d",a%b + x%y);
}