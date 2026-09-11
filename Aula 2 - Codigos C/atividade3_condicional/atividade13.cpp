#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 * 1 + n2 * 1 + n3 * 2) / 4.0;
    printf("Média: %.2f\n", media);

    if (media >= 60.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}