#include <stdio.h>
#define TAM 20 // Cria uma constante para o tamanho do vetor

int main() {
    int vet[TAM], i, maior, posMaior, menor, posMenor;

    // Preenchimento do vetor
    for (i = 0; i < TAM; i++) {
        printf("Entre com um numero: ");
        scanf("%d", &vet[i]);
    }

    posMaior = 0;
    maior = vet[0]; // Inicializa o maior com o primeiro valor do vetor

    // Encontra o maior valor e sua posição no vetor
    for (i = 1; i < TAM; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posMaior = i;
        }
    }

    posMenor = 0;
    menor = vet[0]; // Inicializa o menor com o primeiro valor do vetor

    // Encontra o menor valor e sua posição no vetor
    for (i = 1; i < TAM; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
            posMenor = i;
        }
    }

    printf("\nVetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vet[i]); // Imprime o vetor
    }

    printf("\nMaior valor: %d - posicao: %d", maior, posMaior + 1);
    printf("\nMenor valor: %d - posicao: %d", menor, posMenor + 1);

    // Verifica números iguais
    for (i = 0; i < TAM - 1; i++) {
        for (int j = i + 1; j < TAM; j++) {
            if (vet[i] == vet[j]) {
                printf("\nNumero igual encontrado: %d - posicoes: %d e %d", vet[i], i + 1, j + 1);
            }
        }
    }

    return 0;
}
