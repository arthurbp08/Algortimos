/*Faça um programa que seja capaz de comparar o endereço de dois ponteiros. Caso
o primeiro endereço seja maior que o segundo imprima o resultado da subtração do
primeiro endereço menos o segundo. Caso contrário imprima a subtração realizada
entre o segundo endereço menos o primeiro.*/


#include <stdio.h>

main()
{
    int *p1,*p2, x=10, y=56;

    p1=&x;//cuidado
    p2=&y;


    if(p1>p2){
        printf("end1-end2:%d",p1-p2);
    }
    else{
        printf("end1+end2:%d",p2-p1);

    }
}
