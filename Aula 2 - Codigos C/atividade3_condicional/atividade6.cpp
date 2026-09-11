#include <stdlib.h>
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primero numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("Numero 1 maior");
        printf("Suas diferencas: %d", n1 - n2);
    } else if (n1 < n2) {
        printf("Numero 2 maior");
        printf("Suas diferencas: %d", n2 - n1);
    } else {
        printf("numeros iguais");
    }
}