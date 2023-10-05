/*Elabore uma função que receba três nnotas de um aluno como parâmetro e uma letra. Se a
letra for ‘A’, a função deve calcular a média aritmética das notas do aluno; se a letra for ‘P’,
deverá calcular a média ponderada, com pesos 5,3 e 2. Retorne a média calculada para o
programa principal.
*/
#include <stdio.h>

int mediap(int x,int y);
int mediaa(int x)

main(){
    float notas;
    char media;

    for(int i=0;i<3;i++){

        printf("Insira as notas:");
        scanf("%f",&notas);

    }


    printf("Insira o tipo de media aritimetica[a] ou ponderada[p]");
    scanf("%c",&media);

}
