#include <stdio.h>

int main(){
    float a;
    float b;
    float i;
    float j;
    float x;
    float y;
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    printf("%.3f", (a - b) * (i / j) - (x + y));

return 0;
}