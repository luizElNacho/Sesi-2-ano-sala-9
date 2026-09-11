#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double num, res;

    printf("Digite um numero positivo: ");
    scanf("%lf", &num);

    if (num > 0) {
        res = sqrt(num);

        printf("A raiz quadrada de %lf é %lf \n", num, res);
    } else if (num < 0) {
        printf("Numero negativo/invalido");
    }

    return 0;
}