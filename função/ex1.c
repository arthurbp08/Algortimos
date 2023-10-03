/*Realize a soma de dois elementos. Faça isso através de uma função, a qual será chamada
na função principal.
*/



#include <stdio.h>
int soma(int i, int j);


main()
{
    int x,y,z;

    printf("Insira a o valor de X:\n");
    scanf("%d",&x);

    printf("Insira o valor de Y:\n");
    scanf("%d",&y);

    z = soma(x,y);
    printf("A soma dos valores é:%d\n",z);


}

int soma(int i, int j)
{
    int a;

    a=i+j;

return a;
}
