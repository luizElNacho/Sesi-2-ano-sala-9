#include <stdio.h>

int main() {
    float nota;
    int faltas;
    printf("Digite a nota e o número de faltas: ");
    scanf("%f %d", &nota, &faltas);

    char conceito;

    if (nota >= 9.0 && nota <= 10.0) conceito = (faltas <= 20) ? 'A' : 'B';
    else if (nota >= 7.5) conceito = (faltas <= 20) ? 'B' : 'C';
    else if (nota >= 5.0) conceito = (faltas <= 20) ? 'C' : 'D';
    else if (nota >= 4.0) conceito = (faltas <= 20) ? 'D' : 'E';
    else conceito = 'E';

    printf("Conceito: %c\n", conceito);
    return 0;
}