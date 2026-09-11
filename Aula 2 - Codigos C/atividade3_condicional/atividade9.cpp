#include <stdlib.h>
#include <stdio.h>

int main() {
    float salario, prestasao;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite a prestacao: ");
    scanf("%f", &prestasao);

    if (prestasao > salario * 0.2) {
        printf("Emprestimo cancelado");
    } else {
        printf("Emprestimo concedido");
    }
}