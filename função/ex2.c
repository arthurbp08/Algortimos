/*Escreva um programa que calcule as seguintes operacoes entre dois numeros dados:
Adicao, Multiplicacao, Divisao, Exponeciacao e Media.
*/

#include <stdio.h>
int soma(int i, int j);
int multiplicacao(int i,int j);
int divisao(int i,int j);
int Exponeciacao(int i,int j);
int media(int i,int j);

int main()
{
    int x,y,z,k,l,m,n;

    printf("Insira a o valor de X:\n");
    scanf("%d",&x);

    printf("Insira o valor de Y:\n");
    scanf("%d",&y);

    z = soma(x,y);
    k = multiplicacao(x,y);
    l = divisao(x,y);
    m = Exponeciacao(x,y);
    n = media(x,y);

    printf("A soma dos valores é:%d\n",z);
    printf("A multiplicacao dos valores eh:%d\n",k);
    printf("A divsao dos valores eh:%d\n",l);
    printf("A exponeciacao dos valores eh:%d\n",m);
    printf("A media dos valores eh:%d\n",n);


return 0;
}

int soma(int i, int j){
    int a;

    a=i+j;

return a;
}

int multiplicacao(int i, int j){
    int a;

    a=i*j;

return a;
}

int divisao(int i, int j){
    int a;

    a=i/j;

return a;
}
int Exponeciacao(int i, int j){
    int a;

    a=pow(i,j);

return a;
}
int media(int i, int j){
    int a;

    a=(i+j)/2;

return a;
}
