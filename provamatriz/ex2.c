/*2  Valor (3.0) Tarefa 2: Criar um algoritmo que leia e armazene os elementos de uma matriz M inteira
5 x 5 e gere/imprima o vetor DIF, que é a diferença entre os vetores A e B assim gerados:
 vetor A: contém todos os elementos abaixo da DS
 vetor B: contém todos os elementos acima da DP*/
#include <stdio.h>
main()
{
int m[5][5],l,c,g=0,i=0,A[10],B[10],k=0;

int dif[10];

    for(l=0;l<5;l++){
    for(c=0;c<5;c++){
    printf("Insira os dados:\n");
    scanf("%d",&m[l][c]);



}
}
printf("Os valores da matriz sao:\n");

     for(l=0;l<5;l++){
    for(c=0;c<5;c++){
printf("%d,",m[l][c]);

       }
printf("\n");
    }

    for(l=0;l<5;l++){
    for(c=0;c<5;c++){
            if(l<c)
           {
               B[k]=(m[l][c]);
               k++;
               printf("Os elementos abaixo da diagonal principal sao:%d\n",m[l][c]);
           }
           if(l+c>=5)
           {
               A[i]=(m[l][c]);
               i++;
               printf("Os elementos acima da diagonal secundaria sao:%d\n",m[l][c]);
           }


    }}
    for(g=0;g<10;g++){
           dif[g]=A[g]-B[g];

printf("O vetor de diferenca tera valor de: %d\n",dif[g]);
    }

}
