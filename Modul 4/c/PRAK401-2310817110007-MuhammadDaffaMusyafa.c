#include <stdio.h>

int main() {
    int i;
    int x;
    char y;

    scanf("%d %c", &x, &y);

    for (i = 1; i <= 50; i++) { 
        if (i % x == 0) {
            printf("%c ", y);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}
