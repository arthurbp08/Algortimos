/*- Escreva um programa em C para ler uma frase. A seguir converter todas as letras
minúsculas existentes na frase para maiúsculas. Escrever a frase modificada.
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
main()
{
char string[100];

    printf("Insira a frase:");
    gets(string);
    strupr(string);
    puts(string);
    puts("\n");
    system("pause");

}
