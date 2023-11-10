#include <stdio.h>

int main() {
    int i;
    int x;
    char y[10];

    scanf("%d %s", &x, &y);

    for (i = 1; i <= 50; i++) { 
        if (i % x == 0) {
            printf("%s ", y);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}
