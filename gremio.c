//FUNÇÃO


/*Elabore uma função que receba três nnotas de um aluno como parâmetro e uma letra. Se a
letra for ‘A’, a função deve calcular a média aritmética das notas do aluno; se a letra for ‘P’,
deverá calcular a média ponderada, com pesos 5,3 e 2. Retorne a média calculada para o
programa principal.*/

#include <stdio.h>
#include <string.h>

media_ponderada(float x, float y, float z){

    float media;

            media = (x*5 + y*2 + z*3)/10;

    return (media);
}

media_aritimetica(float x, float y, float z){

  float media;

            media = (x + y + z)/3;

    return (media);

}





main(){

char tipo_media;
float n1, n2, n3, mediaP, mediaA;

    printf("Qual tipo de media voce tem |P p/ ponderada e A p/ aritimetica|:\na");
    scanf("%c",&tipo_media);

    if( tipo_media == 'P' ){

        printf("Insira sua primeira nota:\n");
        scanf("%f",&n1);
        printf("Insira sua segunda nota:\n");
        scanf("%f",&n2);
        printf("Insira sua terceira nota:\n");
        scanf("%f",&n3);


        mediaP = media_ponderada(n1, n2, n3);

        printf("Sua media ponderada eh:%f",mediaP);

    }

    if( tipo_media == 'A'){


        printf("Insira sua primeira nota:\n");
        scanf("%f",&n1);
        printf("Insira sua segunda nota:\n");
        scanf("%f",&n2);
        printf("Insira sua terceira nota:\n");
        scanf("%f",&n3);

            mediaA = media_aritimetica(n1, n2, n3);

        printf("O valor da sua media aritimetica eh:%f",mediaA);
    }



}

//PONTEIROS
/*) Faça um programa que seja capaz de comparar o endereço de dois ponteiros. Caso
o primeiro endereço seja maior que o segundo imprima o resultado da subtração do
primeiro endereço menos o segundo. Caso contrário imprima a subtração realizada
entre o segundo endereço menos o primeiro*/

#include <stdio.h>

int main() {
    int valor1, valor2;
    int *ptr1, *ptr2;

    // Atribuir valores e endereços aos ponteiros
    valor1 = 10;
    valor2 = 20;

    ptr1 = &valor1;
    ptr2 = &valor2;

    // Comparar endereços e imprimir o resultado da subtração
    if (ptr1 > ptr2) {
        printf("O primeiro endereço é maior. Resultado: %ld\n", ptr1 - ptr2);
    } else if (ptr1 < ptr2) {
        printf("O segundo endereço é maior. Resultado: %ld\n", ptr2 - ptr1);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
//STRUCT#include <stdio.h>
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




