/*Construa uma estrutura chamada endereço. Ela deve solicitar a 5 usuários o seu nome, a sua rua, o
seu número e o andar em que mora. Após imprima os dados digitados pelo usuário*/

#include <stdio.h>
#define TAM 50
#define TAM2 50

struct cadastro{
    int numero;
    int andar;
    char rua[TAM2];
    char nome[TAM];
};

typedef struct cadastro cadastro;
main(){

    cadastro pes = {0, 0, "teste", "teste2"};

    for(int i=0;i<5;i++){
        printf("Insira o andar onde mora:\n");
        scanf("%d",&pes.andar);
        printf("\n Insira a numero:\n");
        scanf("%d", &pes.numero);
        printf("Insira o nome da rua:\n");
        scanf("%s", &pes.rua);
        printf("Insira seu nome:\n");
        scanf("%s", &pes.nome);

        printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

        printf("Andar:%d\n",pes.andar);
        printf("Idade:%d\n",pes.numero);
        printf("Rua:%s\n",pes.rua);
        printf("Nome:%s\n",pes.nome);

    }
}
