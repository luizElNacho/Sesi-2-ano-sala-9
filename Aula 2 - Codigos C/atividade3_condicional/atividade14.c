#include <stdio.h>

int main() {
    float lab, sem, final, media;
    printf("Digite as notas do Trabalho, Avaliação Semestral e Exame Final (0 a 10): ");
    scanf("%f %f %f", &lab, &sem, &final);

    if (lab < 0 || lab > 10 || sem < 0 || sem > 10 || final < 0 || final > 10) {
        printf("Notas inválidas. Devem estar entre 0 e 10.\n");
        return 0;
    }

    media = (lab * 2 + sem * 3 + final * 5) / 10.0;
    printf("Média final: %.2f - ", media);

    if (media <= 2.9) {
        printf("Reprovado\n");
    } else if (media <= 4.9) {
        printf("Recuperação\n");
    } else {
        printf("Aprovado\n");
    }
    return 0;
}