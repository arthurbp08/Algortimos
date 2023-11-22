/*- A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o
salário e o número de filhos. Faça rotinas que:
a. Leia esses dados;
b. Calcule a média do salário da população;
c. Calcule a média de números de filhos;
d. Percentual de pessoas com salário até R$ 350,00.*/


#include <stdio.h>
#include <locale.h>

struct prefeitura {
    int salario;
    int filhos;
    float percentual_350;
};

typedef struct prefeitura prefeitura;

int main() {

    setlocale(LC_ALL, "portuguese");

    int populacao = 3;
    int cont = 0;
    float soma_salario = 0.0;
    float soma_filhos = 0.0;

    prefeitura pes;

    for (int i = 0; i < populacao; i++) {
        printf("Insira o salario dos habitantes:\n");
        scanf("%d", &pes.salario);

        printf("Insira o num de filhos:\n");
        scanf("%d", &pes.filhos);

        // Calcula a soma do salário e do número de filhos
        soma_salario += pes.salario;//soma_salario = soma_salario + pes.salario
        soma_filhos += pes.filhos;

        printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n\n\n");

        // Verifica se o salário é até R$ 350,00
        if (pes.salario <= 350) {
            cont++;
        }
    }

    // Calcula a média do salário e do número de filhos
    float media_salario = soma_salario / populacao;
    float media_filhos = soma_filhos / populacao;

    // Calcula o percentual de pessoas com salário até R$ 350,00
    pes.percentual_350 = (cont / (float)populacao) * 100;

    // Exibe os resultados
    printf("Média do salário da população: %.2f\n", media_salario);
    printf("Média do número de filhos: %.2f\n", media_filhos);
    printf("Percentual de pessoas com salário até R$ 350,00: %.2f%%\n", pes.percentual_350);

    return 0;
}


