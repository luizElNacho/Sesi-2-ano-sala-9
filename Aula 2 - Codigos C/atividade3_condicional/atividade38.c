#include <stdio.h>

#define ANO_ATUAL 2008

int main() {
    int dia, mes, ano, maxDias, valida = 1;
    printf("Digite dia, mês e ano de nascimento: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano > ANO_ATUAL) valida = 0;
    if (mes < 1 || mes > 12) valida = 0;

    if (valida) {
        if (mes == 2) {
            int bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
            maxDias = bissexto ? 29 : 28;
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            maxDias = 30;
        } else {
            maxDias = 31;
        }
        if (dia < 1 || dia > maxDias) valida = 0;
    }

    if (valida) printf("Data válida\n");
    else printf("Data inválida\n");

    return 0;
}