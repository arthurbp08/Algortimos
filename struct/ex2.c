/*Escreva um programa que peça ao utilizador o número, nome e nota de dois testes dos alunos de uma
turma, guarde essa informação numa estrutura, e mostre a pauta com os seguintes campos: número,
nome, nota1, nota2, média.
*/

//pede numero, nota1 e 2 tudo isso de 1 turma e guardar isso na struct;
//printar número, nome, nota1, nota2, média.
#include <stdio.h>

struct aluno{

    int numero;
    float nota1;
    float nota2;
    char nome[100];
};

typedef struct aluno aluno;

main(){

        struct aluno pes = {0, 0.0, 0.0, "teste"};

        printf("Insira seu numero:\n");
        scanf("%d",&pes.numero);
        printf("Insira as nota1:\n");
        scanf("%f",&pes.nota1);
        printf("Insira a nota2:\n");
        scanf("%f",&pes.nota2);

        printf("Insira seu nome:\n");
        scanf("%s",pes.nome);

       float media = (pes.nota1 + pes.nota2 / 2);

        printf("Numero:%d\n",pes.numero);
        printf("nota1:%f\n",pes.nota1);
        printf("nota2:%f\n",pes.nota2);
        printf("nome:%s\n",pes.nome);
        printf("media:%f\n",media);


}
