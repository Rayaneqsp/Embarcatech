#include <stdio.h>

// Funções de conversão
float kg_para_grama(float kg) {
    return kg * 1000;
}

float kg_para_libra(float kg) {
    return kg * 2.20462;
}
float grama_para_kg(float gramas) {
    return gramas / 1000;
}

float grama_para_libra(float gramas) {
    return gramas / 453.592;
}

float libra_para_kg(float libras) {
    return libras / 2.20462;
}

float libra_para_grama(float libras) {
    return libras * 453.59237;
}

int main() {
    int opcao;
    float valor, resultado;

    do {
        // Exibe o menu de opções
        printf("\nConversor de Unidades de Massa\n");
        printf("1. Quilogramas para Gramas\n");
        printf("2. Quilogramas para Libras\n");
        printf("3. Gramas para Quilogramas\n");
        printf("4. Gramas para Libras\n");
        printf("5. Libras em Gramas\n");
        printf("6. Libras em Quilogramas\n");
        printf("7. Sair\n");
        printf("Selecione uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao < 7) {
            // Solicita o valor a ser convertido
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }

        // Processa a opção selecionada
        switch (opcao) {
            case 1:
                resultado = kg_para_grama(valor);
                printf("%.2f kg equivalem a %.2f gramas.\n", valor, resultado);
                break;
            case 2:
                resultado = kg_para_libra(valor);
                printf("%.2f kg equivalem a %.2f libras.\n", valor, resultado);
                break;
            case 3:
                resultado = grama_para_kg(valor);
                printf("%.2f gramas equivalem a %.2f kg.\n", valor, resultado);
                break;
            case 4:
                resultado = grama_para_libra(valor);
                printf("%.2f gramas equivalem a %.2f libras.\n", valor, resultado);
                break;
            case 5:
                resultado = libra_para_kg(valor);
                printf("%.2f libras equivalem a %.2f kg.\n", valor, resultado);
                break;
            case 6:
                resultado = libra_para_grama(valor);
                printf("%.2f libras equivalem a %.2f gramas.\n", valor, resultado);
                break;
            case 7:
                printf("Saindo do programa.\n");
                opcao = 7;
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 7);

    return 0;
}
