#include <stdio.h>

float mediap(float x, float y, float z);
float mediaa(float x, float y, float z);

int main() {
    float nota1, nota2, nota3;
    char media;

    printf("Insira a nota1:");
    scanf("%f", &nota1);
    printf("Insira a nota2:");
    scanf("%f", &nota2);
    printf("Insira a nota3:");
    scanf("%f", &nota3);

    printf("Insira o tipo de media aritimetica [a] ou ponderada [p]: ");
    scanf(" %c",&media);  // Use um espaço antes de %c para evitar problemas de buffer.

    if (media == 'a' || media == 'A') {
        float a = mediaa(nota1, nota2, nota3);
        printf("A media aritmetica e: %f\n", a);
    } else if (media == 'p' || media == 'P') {
        float b = mediap(nota1, nota2, nota3);
        printf("A media ponderada e: %f\n", b);
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}

float mediap(float x, float y, float z) {
    float a;
    a = (x * 5 + y * 3 + z * 2) / 10;
    return a;
}

float mediaa(float x, float y, float z) {
    float a;
    a = (x + y + z) / 3;
    return a;
}
