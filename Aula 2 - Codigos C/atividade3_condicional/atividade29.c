#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int acertos = 0;

    for (int i = 1; i <= 5; i++) {
        int a = (rand() % 100) + 1;
        int b = (rand() % 100) + 1;
        int ans;

        printf("Pergunta %d: Qual é a soma de %d + %d? ", i, a, b);
        scanf("%d", &ans);

        if (ans == a + b) {
            printf("Correto!\n");
            acertos++;
        } else {
            printf("Incorreto! A resposta correta era %d.\n", a + b);
        }
    }

    printf("Você acertou %d de 5 perguntas.\n", acertos);
    return 0;
}