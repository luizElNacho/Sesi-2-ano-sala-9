#include <stdio.h>

int main() {
    int op;
    float n1, n2;

    printf("Escolha a opção:\n");
    printf("1 - Soma de 2 números.\n");
    printf("2 - Diferença entre 2 números (maior pelo menor).\n");
    printf("3 - Produto entre 2 números.\n");
    printf("4 - Divisão entre 2 números (o denominador não pode ser zero).\n");
    scanf("%d", &op);

    if (op >= 1 && op <= 4) {
        printf("Digite dois números: ");
        scanf("%f %f", &n1, &n2);
    }

    switch (op) {
        case 1: printf("Soma: %.2f\n", n1 + n2); break;
        case 2: 
            if (n1 > n2) printf("Diferença: %.2f\n", n1 - n2);
            else printf("Diferença: %.2f\n", n2 - n1);
            break;
        case 3: printf("Produto: %.2f\n", n1 * n2); break;
        case 4:
            if (n2 != 0) printf("Divisão: %.2f\n", n1 / n2);
            else printf("Erro: denominador é zero.\n");
            break;
        default: printf("Erro: Opção inválida.\n"); break;
    }
    return 0;
}