#include <stdio.h>

int main(){
    int b;
    int hari =0, jam = 0, menit = 0, detik = 0;
    scanf("%d", &b);
    hari = b / 86400;
    b %= 86400;
    jam = b / 3600;
    b %= 3600;
    menit = b / 60;
    b %= 60;
    detik = b / 1;
    b %= 1;
    if (hari > 0)
    {
       printf("%d hari %02d:%02d:%02d:",hari , jam , menit , detik); 
    }
    else if (jam > 0)
    {
       printf("%02d:%02d:%02d:", jam , menit , detik); 
    }
    else if (menit > 0)
    {
       printf("%02d:%02d:%02d:", jam , menit , detik); 
    }
    else if (detik > 0)
    {
       printf("%02d:%02d:%02d:", jam , menit , detik); 
    }
    return 0;
}