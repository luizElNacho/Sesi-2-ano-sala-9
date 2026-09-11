#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double num, res;

    printf("Digite um numero real: ");
    scanf("%lf", &num);

    if (num > 0) {
        res = sqrt(num);
        printf("A raiz quadrada de %lf é %lf", num, res);
    } else if (num < 0) {
        printf("Numero negativo, portanto calcular numero elevado ao quadrado: \n");
        res = num * num;
        printf("Numero %lf elevado ao quadrado é %lf", num, res);
    }
}