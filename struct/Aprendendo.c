#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //criando e inicializando
    //As três variaveis da struct estão na variavel pes
    tipo_pessoa pes = {0, 0.0,"Teste"};
    //os três valores são assim pois são para idade, peso e Strings

    printf("Início:\n");
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);
    printf("pes.nome: %s\n",pes.nome);

    //Atribuindo valores aos campos

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\n\n\n\n");
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);
    printf("pes.nome: %s\n",pes.nome);

    //Se o usuario entrar com os valores

    printf("\n\n\n\n");
    printf("\n Insira um númeor inteiro:\n");
    scanf("%d", &pes.idade);
    printf("Insira um número de peso:\n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    //serve para armazenar os dados do codigo até agora na memoria
    //se não colocar no código ele buga
    printf("Insira seu nome:\n");
    scanf("%s", &pes.nome);

    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);
    printf("pes.nome: %s\n",pes.nome);

}
