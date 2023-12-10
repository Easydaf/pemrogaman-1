#include <stdio.h>
int reverse(int n){
// Lengkapi Function ini
    int isi = 0;
    while (n != 0)
    {
        isi = isi*10;
        isi = isi+n%10;
        n = n/10;}
        return isi;}
int main() {
 int A, B;
 scanf("%d %d",&A,&B);
 A=reverse(A);
 B=reverse(B);
 int C = A+B;
 printf("%d",reverse(C));
}
