#include <stdio.h>

int main() {
    int matriksA[10][10], matriksB[10][10], hasil_kali[10][10];
    int ordo, hasil = 0;

    scanf("%d", &ordo);

    printf("Matriks A\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            scanf("%d", &matriksA[i][j]);
        }
    }

    printf("Matriks B\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            scanf("%d", &matriksB[i][j]);
        }
    }

    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            for (int k = 0; k < ordo; k++) {
                hasil += matriksA[i][k] * matriksB[k][j];
            }
            hasil_kali[i][j] = hasil;
            hasil = 0;
        }
    }

    printf("Matriks AxB\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("%d ", hasil_kali[i][j]);
        }
        printf("\n");
    }

    return 0;
}
