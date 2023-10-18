#include <stdio.h>

int main(){

char name[50]; char num[20]; char class[50]; char birth[50]; char address[50]; char hobby[50]; char number[50];

printf("Nama\t\t\t:");
fgets(name, sizeof(name), stdin);
printf("NIM\t\t\t:");
fgets(num, sizeof(num), stdin);
printf("Kelas paralel\t\t:");
fgets(class, sizeof(class),stdin);
printf("Tempat/Tanggal Lahir\t:");
fgets(birth,sizeof(birth),stdin);
printf("Alamat\t\t\t:");
fgets(address,sizeof(address),stdin);
printf("Hobby\t\t\t:");
fgets(hobby,sizeof(hobby),stdin);
printf("No. HP\t\t\t:");
fgets(number,sizeof(number),stdin);


printf("Nama\t\t\t: %s", name);
printf("NIM\t\t\t: %s", num);
printf("Kelas Paralel\t\t: %s", class);
printf("Tempat/Tanggal Lahir\t: %s", birth);
printf("Alamat\t\t\t: %s", address);
printf("Hobby\t\t\t: %s", hobby);
printf("No. HP\t\t\t: %s", number);

return 0;
}