#include <stdio.h>
#include <locale.h>

float converterComprimento(float valor, char unidadeOrigem, char unidadeDestino) {
    float metros = valor;
    switch (unidadeOrigem) {
        case 'C':
            metros = valor / 100; // Centímetros para metros
            break;
        case 'K':
            metros = valor * 1000; // Quilômetros para metros
            break;
        case 'P':
            metros = valor / 39.3701; // Polegadas para metros
            break;
        case 'M':
            metros = valor / 1000; // Milímetros para metros
            break;
        case 'D':
            metros = valor / 10; // Decímetros para metros
            break;
        case 'J':
            metros = valor / 1.09361; // Jardas para metros
            break;
        case 'E':
            metros = valor / 3.28084; // Pés para metros
            break;
    }

    float resultado = metros;

    switch (unidadeDestino) {
        case 'C':
            resultado = metros * 100; // Metros para centímetros
            break;
        case 'K':
            resultado = metros / 1000; // Metros para quilômetros
            break;
        case 'P':
            resultado = metros * 39.3701; // Metros para polegadas
            break;
        case 'M':
            resultado = metros * 1000; // Metros para milímetros
            break;
        case 'D':
            resultado = metros * 10; // Metros para decímetros
            break;
        case 'J':
            resultado = metros * 1.09361; // Metros para jardas
            break;
        case 'E':
            resultado = metros * 3.28084; // Metros para pés
            break;
    }

    return resultado;
}

float converterPeso(float valor, char unidadeOrigem, char unidadeDestino) {
    float quilogramas = valor;
    switch (unidadeOrigem) {
        case 'G':
            quilogramas = valor / 1000; // Gramas para quilogramas
            break;
        case 'O':
            quilogramas = valor / 35.274; // Onças para quilogramas
            break;
        case 'L':
            quilogramas = valor / 2.20462; // Libras para quilogramas
            break;
        case 'T':
            quilogramas = valor * 1000; // Toneladas métricas para quilogramas
            break;
        case 'K':
            quilogramas = valor / 5000; // Quilates para quilogramas
            break;
        case 'P':
            quilogramas = valor / 15432.4; // Grãos para quilogramas
            break;
        case 'B':
            quilogramas = valor / 0.00980665; // Quilonewtons para quilogramas
            break;
    }

    float resultado = quilogramas;

    switch (unidadeDestino) {
        case 'G':
            resultado = quilogramas * 1000; // Quilogramas para gramas
            break;
        case 'O':
            resultado = quilogramas * 35.274; // Quilogramas para onças
            break;
        case 'L':
            resultado = quilogramas * 2.20462; // Quilogramas para libras
            break;
        case 'T':
            resultado = quilogramas / 1000; // Quilogramas para toneladas métricas
            break;
        case 'K':
            resultado = quilogramas * 5000; // Quilogramas para quilates
            break;
        case 'P':
            resultado = quilogramas * 15432.4; // Quilogramas para grãos
            break;
        case 'B':
            resultado = quilogramas * 0.00980665; // Quilogramas para quilonewtons
            break;
    }

    return resultado;
}

float converterTemperatura(float valor, char unidadeOrigem, char unidadeDestino) {
    if (unidadeOrigem == 'C' && unidadeDestino == 'F') {
        return (valor * 9 / 5) + 32; // Celsius para Fahrenheit
    } else if (unidadeOrigem == 'C' && unidadeDestino == 'K') {
        return valor + 273.15; // Celsius para Kelvin
    } else if (unidadeOrigem == 'F' && unidadeDestino == 'C') {
        return (valor - 32) * 5 / 9; // Fahrenheit para Celsius
    } else if (unidadeOrigem == 'F' && unidadeDestino == 'K') {
        return (valor - 32) * 5 / 9 + 273.15; // Fahrenheit para Kelvin
    } else if (unidadeOrigem == 'K' && unidadeDestino == 'C') {
        return valor - 273.15; // Kelvin para Celsius
    } else if (unidadeOrigem == 'K' && unidadeDestino == 'F') {
        return (valor - 273.15) * 9 / 5 + 32; // Kelvin para Fahrenheit
    }

    return valor;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("Bem-vindo ao Conversor de Unidades Simples!\n");

    int opcao;
    do {
        printf("\nEscolha o que deseja converter:\n");
        printf("1. Comprimento\n");
        printf("2. Peso\n");
        printf("3. Temperatura\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando o programa. Até logo!\n");
            break;
        }

        float valor;
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);
        char unidadeOrigem, unidadeDestino;
        if(opcao==1){
        printf("SE A UNIDADE FOR COMPRIMENTO\nC para Centimetro\nK para Quilometro\nP para Polegadas\nM para Milimetros\nD para Decimetros\nJ para Jardas\nE para Pés\n+=================================+======================================+\n");
        }
        if(opcao==2){
        printf("SE A UNIDADE FOR PESO\nG para Gramas\nO para Onças\nL para Libras\nT para Toneladas Metricas\nK para Quilates\nP para grãos\nB para quilonewtons\n+=================================+======================================+\n");
        }
        if(opcao==3){
        printf("SE A UNIDADE FOR TEMPERATURA\nK para Kelvin\nC para Celsius\nF para Fahrenheit\n+=================================+======================================+\n");
        }printf("Digite a unidade de origem :");
        scanf(" %c", &unidadeOrigem);
        printf("Digite a unidade de destino:");
        scanf(" %c", &unidadeDestino);

        float resultado;

        switch (opcao) {
            case 1:
                resultado = converterComprimento(valor, unidadeOrigem, unidadeDestino);
                break;
            case 2:
                resultado = converterPeso(valor, unidadeOrigem, unidadeDestino);
                break;
            case 3:
                resultado = converterTemperatura(valor, unidadeOrigem, unidadeDestino);
                break;
            default:
                printf("Opção inválida!\n");
                continue; // Volta ao início do loop
        }

        printf("Resultado da conversão: %.2f %c\n", resultado, unidadeDestino);

    } while (1);

    return 0;
}

