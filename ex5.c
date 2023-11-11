#include <stdio.h>

int main() {
    int matriz[100][100];
    int *ptr = &matriz[0][0];
    int numero = 1;

    for (int i = 0; i < 10000; i++) {
        *ptr = 0;
        ptr++;
    }

    ptr = &matriz[0][0];

    for (int i = 1; i <= 10000; i++) {
        *ptr = numero;
        numero++;
        ptr++;
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
