#include <stdlib.h>
#include <stdio.h>

int main() {
    int num, soma;

    printf("Digite um numero: \n");
    scanf("%d", num);

    if (num < 0) {
        printf("Numero negativo, invalido!");
    }

    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }

    printf("Soma dos algarismos: \n %d", soma);
}