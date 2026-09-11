#include <stdio.h>

int main() {
    int op;
    float n1, n2;
    printf("1- Soma\n2- Subtração\n3- Multiplicação\n4- Divisão\nEscolha a operação: ");
    scanf("%d", &op);

    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);

    switch (op) {
        case 1: printf("Resultado: %.2f\n", n1 + n2); break;
        case 2: printf("Resultado: %.2f\n", n1 - n2); break;
        case 3: printf("Resultado: %.2f\n", n1 * n2); break;
        case 4: 
            if (n2 != 0) printf("Resultado: %.2f\n", n1 / n2);
            else printf("Erro: divisão por zero.\n");
            break;
        default: printf("Opção inválida.\n"); break;
    }
    return 0;
}