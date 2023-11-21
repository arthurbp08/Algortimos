/*4- Considere que uma empresa precisa armazenar os seguintes dados de um cliente:
o Nome completo com no máximo 50 caracteres;
o renda mensal do cliente;
o ano de nascimento;
o possui ou não carro.
Defina um tipo e uma estrutura para armazenarem estes dados e escreva um programa que leia estes dados
armazene-os em uma variável e em seguida os imprima.
*/

#include <stdio.h>
#include <string.h>
#define TAM 50



struct cadastro{

    char nome[TAM];
    int renda;
    int nascimento;
    char carro;

};

typedef struct cadastro cadastro;

main(){

    struct cadastro pes = {"teste", 0, 0, "sim"};

        printf("Insira seu nome:\n");
        scanf("%s", pes.nome);
        printf("Insira a sua renda mesal:\n");
        scanf("%d",&pes.renda);
        printf("Insira sua data de nascimento|SEM USAR ESPACOS OU BARRAS|\n");
        scanf("%d",&pes.nascimento);
        fflush(stdin);
        printf("Voce possui carro?|S para sim e N para nao|\n");
        scanf("%c",&pes.carro);

    if(pes.carro == 'S'){
        printf("Nome:%s\n",pes.nome);
        printf("Renda:%d\n",pes.renda);
        printf("data de nascimento:%d\n",pes.nascimento);
        printf("Voce possui um carro!");
    }

    if(pes.carro == 'N'){
         printf("Nome:%s\n",pes.nome);
        printf("Renda:%d\n",pes.renda);
        printf("data de nascimento:%d\n",pes.nascimento);
        printf("Voce nao possui um carro!");

    }
}
