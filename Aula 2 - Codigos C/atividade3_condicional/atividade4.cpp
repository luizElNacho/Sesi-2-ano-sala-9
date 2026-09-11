#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double num, qua, raiz;
    printf("Digite um numero");
    scanf("%lf", &num);

    if (num >= 0){
        printf("Vamos calcular o quadrado e a raiz quadrada de %lf", num);
        qua = num * num;
        raiz = sqrt(num);
        printf("Numero: \n %lf, Quadrado: \n %lf, Raiz: \n %lf", num, qua, raiz);
    }
}