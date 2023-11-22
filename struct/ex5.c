#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50
#define MAX_CONTAS 15

struct banco {
    int conta;
    char nome[TAM];
    float saldo;
};

typedef struct banco banco;

int main() {
    setlocale(LC_ALL, "Portuguese");

    banco contas[MAX_CONTAS];
    int num_contas = 0;
    int opcao = 0;

    while (opcao != 4) {
        printf("\nMenu de Opções:\n");
        printf("1. Cadastrar conta\n");
        printf("2. Visualizar todas as contas\n");
        printf("3. Excluir conta com menor saldo\n");
        printf("4. Sair\n");
        printf("Insira a opção aqui: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (num_contas < MAX_CONTAS) {
                int num_conta;
                printf("\nInsira um número para a conta: ");
                scanf("%d", &num_conta);

                int conta_existente = 0;
                for (int i = 0; i < num_contas; i++) {
                    if (contas[i].conta == num_conta) {
                        printf("Conta já existente. Tente novamente.\n");
                        conta_existente = 1;
                        break;
                    }
                }

                if (!conta_existente) {
                    contas[num_contas].conta = num_conta;

                    printf("Insira seu nome: ");
                    scanf("%s", contas[num_contas].nome);

                    printf("Insira seu saldo: ");
                    scanf("%f", &contas[num_contas].saldo);

                    num_contas++;
                    printf("Conta cadastrada com sucesso!\n");
                }
            } else {
                printf("Limite de contas atingido!\n");
            }
        } else if (opcao == 2) {
            printf("\nContas cadastradas:\n");
            for (int i = 0; i < num_contas; i++) {
                printf("Conta: %d | Nome: %s | Saldo: %.2f\n", contas[i].conta, contas[i].nome, contas[i].saldo);
            }
        } else if (opcao == 3) {
            if (num_contas > 0) {
                int indice_menor_saldo = 0;
                for (int i = 1; i < num_contas; i++) {
                    if (contas[i].saldo < contas[indice_menor_saldo].saldo) {
                        indice_menor_saldo = i;
                    }
                }

                printf("Conta com menor saldo excluída:\n");
                printf("Conta: %d | Nome: %s | Saldo: %.2f\n", contas[indice_menor_saldo].conta, contas[indice_menor_saldo].nome, contas[indice_menor_saldo].saldo);

                for (int i = indice_menor_saldo; i < num_contas - 1; i++) {
                    contas[i] = contas[i + 1];
                }

                num_contas--;
            } else {
                printf("Não há contas para excluir.\n");
            }
        } else if (opcao == 4) {
            printf("Saindo do programa...\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
