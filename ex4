/*Elabore um algoritmo que leia uma lista de letras, a qual será terminada pela letra Z ou
quando forem digitadas dez letras. Ao final, o algoritmo deve mostrar a quantidade de
vogais e consoantes lidas. A letra Z não pode ser assumida como consoante para este
caso.*/

#include <stdio.h>

main() {

    char lista[10];
    int vogais = 0, consoantes = 0;

    for (int i = 0; i < 10; i++) {
        printf("Insira uma letra (ou digite Z para parar): ");
        scanf(" %c", &lista[i]);

        if (lista[i] == 'Z')
        {
            break;
        }

        if (lista[i] >= 'a' && lista[i] <= 'z') {
            if (lista[i] == 'a' || lista[i] == 'e' || lista[i] == 'i' || lista[i] == 'o' || lista[i] == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);


}
