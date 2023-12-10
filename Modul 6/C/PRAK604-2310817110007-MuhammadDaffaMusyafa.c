#include <stdio.h>
#include <string.h>

int main() {
    char pesan1[100];
    char pesan2[100];
    int i;
    int j;
    int asterik = 0;
    int hash = 0;

    scanf(" %99[^\n]", pesan1);
    scanf(" %99[^\n]", pesan2);

    size_t panjangpesan1 = strlen(pesan1);
    size_t panjangpesan2 = strlen(pesan2);

    i = 0;
    j = 0;

    while (i < panjangpesan1 && j < panjangpesan2) {
        if (pesan1[i] == ' ' && pesan2[j] == ' ') {
            i++;
            j++;
            continue;
        }
        if (pesan1[i] == pesan2[j]) {
            asterik++;
        } else {
            hash++;
        }

        i++;
        j++;
    }

    if (panjangpesan1 == panjangpesan2) {
        printf("\n* = %d\n", asterik);
        printf("# = %d\n", hash);
        if (asterik >= hash) {
            printf("Pesan Asli");
        } else {
            printf("Pesan Palsu");
        }
    } else {
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    return 0;
}
