/*O cardápio de uma casa de lanches, especializada em sanduíches, é exemplificado a
seguir. Escreva um algoritmo que leia o código e a quantidade de cada item comprado por
um freguês calcule e exiba o total a pagar. (Obs.: A leitura de código “X” indica o fim dos
itens).
Código Produto Preço (R$)
H Hamburguer 5,00
C Cheeseburguer 6,00
M Misto-quente 4,00
A Americano 8,00
Q Queijo-prato 7,00*/

#include <stdio.h>

int main() {
    char codigo;
    int quantidade;
    float total = 0.0;

    printf("Cardápio de Lanches\n");
    printf("Código Produto    Preço (R$)\n");
    printf("H      Hamburguer  5,00\n");
    printf("C      Cheeseburguer 6,00\n");
    printf("M      Misto-quente 4,00\n");
    printf("A      Americano    8,00\n");
    printf("Q      Queijo-prato 7,00\n");
    printf("Digite o código e a quantidade de cada item comprado (digite 'X' para finalizar):\n");

    while (1) {
        printf("Código: ");
        scanf(" %c", &codigo);

        if (codigo == 'X') {
            break;
        }

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        switch (codigo) {
            case 'H':
                total += quantidade * 5.0; //total = total + quantidade * 5.0;

                break;
            case 'C':
                total += quantidade * 6.0;
                break;
            case 'M':
                total += quantidade * 4.0;
                break;
            case 'A':
                total += quantidade * 8.0;
                break;
            case 'Q':
                total += quantidade * 7.0;
                break;
            default:
                printf("Código inválido!\n");
        }
    }

    printf("Total a pagar: R$%.2f\n", total);

    }
