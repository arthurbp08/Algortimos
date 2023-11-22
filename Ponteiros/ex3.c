/*Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique
no computador o resultado. A seguir, escreva um  comentário  em cada comando de
atribuição explicando o que ele faz e o valor da variável à esquerda do '=' após sua
execução.*/


int main()
    {
    int y, *p, x;

    y = 0;//y recebe 0
    p = &y;//o ponteiro recebe o endereco 
    x = *p;//x recera o conteudo do ponteiro
    x = 4;//x recebe 4
    (*p)++;//conteudo do ponteiro vai de um em um
    x--;//conteudo de x volta uma posição
    (*p) += x;//*p = *p + x  

printf ("y = %d\n", y);
return(0);
}
