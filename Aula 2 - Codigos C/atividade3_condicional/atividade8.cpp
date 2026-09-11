#include <stdlib.h>
#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    if (nota1 >= 0 && nota1 <= 10) {
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        if (nota2 >= 0 && nota2 <= 10) {
            media = (nota1 + nota2) / 2;
            printf("A media das notas e %f", media);
        } else {
        printf("Nota invalida!");
    }
    } else {
        printf("Nota invalida!");
    }
}