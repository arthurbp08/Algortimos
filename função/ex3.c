/*Escreva em C a função VERIFICA_QUADRANTE. A função recebe um valor para x e um
valor para y e retorna o número do quadrante (1,2,3 ou 4).
*/
#include <stdio.h>

int VERIFICA_QUADRANTE(float x, float y) {
    if (x > 0 && y > 0) {
        return 1; // Primeiro quadrante
    } else if (x < 0 && y > 0) {
        return 2; // Segundo quadrante
    } else if (x < 0 && y < 0) {
        return 3; // Terceiro quadrante
    } else if (x > 0 && y < 0) {
        return 4; // Quarto quadrante
    } else {
        return 0; // Ponto está na origem (ou em um dos eixos)
    }
}
main(){

    float x,y;

    printf("Insira o valor de x:\n");
    scanf("%f", &x);

    printf("Insira o valor de y:\n");
    scanf("%f", &y);

    float quadrante = VERIFICA_QUADRANTE(x, y);//cuidado

    if(quadrante == 0)
    {
        printf("O ponto (%.2f, %.2f) está na origem ou em um dos eixos.\n", x, y);
    } else {
        printf("O ponto (%.2f, %.2f) está no quadrante %d.\n", x, y, quadrante);//cuidar nos prints

    }

}
