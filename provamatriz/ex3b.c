/*b) Valor (2.0) Faça um programa que:
a) Leia uma número N inteiro entre 3 e 10.
b) Leia uma matriz de números reais de tamanho N x N. Obs.: Caso exista algum número menor que
zero nesta matriz, atribua a este termo o valor zero automaticamente.
c) Calcule e imprima a soma da diagonal principal da matriz lida, e a mesma no formato matricial.*/

#include <stdio.h>

int main ()
{
 float mat[10][10];
 int somadiagonal;
 int i, j, n;
 do {
 printf ("N=?");
 scanf ("%d", &n);//adicionei um scanf

} while (n<3 || n>10);
for (i=0; i<n; i++) {
    for(j=0;j<n;j++){//laço de repetição par matriz rodar
        printf ("Digite o valor da posição %d,%d da matriz: ",i+1, j+1);
        scanf("%f", &mat[i][j]);//adicionei o scanf
        if(mat[i][j]<0){//adicionei o if
            mat[i][j] = 0;
        }
    if (i==j){
        somadiagonal = somadiagonal + mat[i][j];//soma da diagonal recebendo somadiagonal+matriz
        }
    }
}

printf ("A soma da diagonal principal da matriz e: %d\n",somadiagonal);
for(i=0;i<n;i++){//adicionei laço de repetição para matriz aparecer
    for (j=0; j<n; j++){
        printf ("%.2f  ", mat[i][j]);//dois numeros iram aparecer dps da virgula
    }
    printf ("\n");
}
return 0;
}
