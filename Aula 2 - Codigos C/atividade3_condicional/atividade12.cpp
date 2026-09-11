#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Número inválido\n");
    } else {
        printf("Logaritmo natural: %lf\n", log(num));
    }
    return 0;
}