#include <stdio.h>
main()
{

int M[3][3], l, c, V[3],a1=1,a2=1, a3=1, i ;

for(l=0; l<3; l++)
{
for(c=0; c<3; c++)
{
printf("Digite um número:\n");
scanf("%d", &M[l][c]);
}
}
for(l=0; l<3; l++)
{
for(c=0; c<3; c++)
{
if(l==0)
a1 = a1 * M[l][c];




if(l==1)
a2 = a2 * M[l][c];
else if(l==2)
{

a3 = a3 * M[l][c];}

}
}




printf("resultado:%d\n", a1);
printf("resultado:%d\n", a2);
printf("resultado:%d\n", a3);
}



/* Faça um programa que permita ao usuário entrar com uma matriz 3 x 3 de números inteiros. Em
seguida, gere um array unidimensional pela multiplicação dos números de cada linha da matriz e mostrar
na tela esse array. Por exemplo, a matriz:
9 -8 0
4 -2 12
15 10 -7
Vai gerar um vetor, onde cada posição é o produto das linhas da matriz. A primeira posição será 9 *(-8) * 0,
e assim por diante:
0 -96 -1050 */
