#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Numero digitado %d e par", num);
    } else {
        printf("Numero digitado %d e impar", num);
    }
}