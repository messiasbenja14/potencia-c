#include <stdio.h>
#include <stdlib.h>
#include "function_potencia.c"

int main(int argc, char const *argv[]) {
    double num1, num2;

    if (argc >= 3) {
        num1 = atof(argv[1]);
        num2 = atof(argv[2]);
    } else {
        printf("Digite a base: ");
        if (scanf("%lf", &num1) != 1) return 1;
        
        printf("Digite o expoente: ");
        if (scanf("%lf", &num2) != 1) return 1;
    }

    double res = potencia(num1, num2);

    printf("resultado: %f\n", res);
    printf("\nFeito por benjamim messias\n");

    FILE *arquivo = fopen("potencia.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "resultado: %f\n", res);
        fprintf(arquivo, "\nFeito por benjamim messias\n");
        fclose(arquivo);
    } else {
        printf("Erro ao criar o arquivo de saida.\n");
    }

    return 0;
}
