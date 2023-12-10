#include <stdio.h>

int main(){
    int v, w, x, y, z;
    scanf("%d %d", &v, &w);
    int a[v][w];

    for (int x = 0; x < v; x++) {
        for (int y = 0; y < w; y++) {
            scanf("%d", &z);
            a[x][y] = z;
        }
    }

    for (int x = 0; x < v; x++) {
        for (int y = 0; y < w; y++) {
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }

    return 0;
}
