#include <stdlib.h>
#include <stdio.h>

int main() {
    float altura, ideal;
    char sexo;

    printf("Digite sua altura: \n");
    scanf("%f", altura);

    printf("Digite seu sexo: M/F\n");
    scanf("%c", sexo);

    if (sexo == 'M'){
        ideal = (72.7 * altura) - 58;
        printf("Sua altura ideal e: \n %f", ideal);
    } else if (sexo == 'F'){
        ideal = (62.1 * altura) - 44.7;
        printf("Sua altura ideal e: \n %f", ideal);
    }
}