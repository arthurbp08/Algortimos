/*Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho maximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da
comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacão;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser
informado pelo usuario;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres
C1 e C2 serão lidos pelo usuário;*/

#include <stdio.h>
#include <string.h>

main () {

int cont, quant=0;
char string1[20], string2[20];
char letra1, letra2, menu;

printf("Digite uma frase ou palavra: ");
gets(string1);

printf("\nSelecione uma opcao: ");
printf("\n\n[a] Ler uma string (tamanho maximo - 20 letras)\n[b] Imprimir o tamanho da string \n[c] Comparar a string com outra \n[d] Juntar a string com outra \n[e] Imprimir a string de forma reversa \n[f] Contar quantas vezes um caractere aparece na string \n[g] Substituir um caracter\n");

printf("\nEscolha a opcao: ");
scanf(" %c", &menu);

switch (menu){

case 'a':
printf("Digite uma frase ou palavra: ");
scanf(" %s", &string1);

break;

case 'b': //erro
printf(strlen(string1));
break;

case 'c':
printf("\nDigite uma segunda frase ou palavra: ");
scanf(" %s", &string2);

if (strcmp(string1, string2) == 0){
printf("\nAs palavras sao iguais.\n");}
else printf("\nAs palavras sao diferentes.\n");

break;

case 'd':
printf("\nDigite uma segunda frase ou palavra: ");
scanf(" %s", &string2);

printf("\n");
printf(strcat(string1, string2));
printf("\n");
break;

case 'e':
printf("\n");
printf(strrev(string1));
printf("\n");
break;

case 'f': //erro
printf("Selecione um caracter: ");
scanf(" %c", letra1);

for(cont=0;cont<20;cont++){
if (string1[cont] == letra1)
quant++;
}
break;

case 'g': //erro
printf("Selecione um caracter: ");
scanf(" %c", letra1);

printf("Selecione um outro caracter: ");
scanf(" %c", letra2);

for(cont=0;cont<20;cont++){
if (string1[cont] == letra1)
string1[cont] = letra2;
break;
}

break;

default:
printf("Opcao invalida, tente novamente.");
break;
}
}
