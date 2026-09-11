#include <stdio.h>
#include <string.h>

int main() {
    float valor, precoFinal;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite a sigla do estado de destino (MG, SP, RJ, MS): ");
    scanf("%s", estado);

    if (strcmp(estado, "MG") == 0) precoFinal = valor * 1.07;
    else if (strcmp(estado, "SP") == 0) precoFinal = valor * 1.12;
    else if (strcmp(estado, "RJ") == 0) precoFinal = valor * 1.15;
    else if (strcmp(estado, "MS") == 0) precoFinal = valor * 1.08;
    else {
        printf("Erro: Estado inválido.\n");
        return 0;
    }

    printf("Preço final com imposto: R$ %.2f\n", precoFinal);
    return 0;
}