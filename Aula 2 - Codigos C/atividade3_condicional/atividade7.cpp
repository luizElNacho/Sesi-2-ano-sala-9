#include <stdlib.h>
#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite o primero numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("Numero 1 maior");
    } else if (n1 < n2) {
        printf("Numero 2 maior");
    } else {
        printf("numeros iguais");
    }
}