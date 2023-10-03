/*Desenvolva um programa que imprima 10 elementos. Realize esse algoritmo através de
uma função*/

#include <stdio.h>

void imprimir(){

 srand(time(NULL));

 for(int i=0;i<10;i++){
  int elemento = rand() % 100; // Gera números aleatórios entre 0 e 99
        printf("%d ", elemento);
}
}

 main(){
 imprimir();
//preciso chamar a função para imprimir os elemntos

}
