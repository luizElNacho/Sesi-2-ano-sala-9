#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int div3 = (num % 3 == 0);
    int div5 = (num % 5 == 0);

    if ((div3 || div5) && !(div3 && div5)) {
        printf("O número %d é divisível por 3 ou 5, mas não por ambos.\n", num);
    } else {
        printf("Não atende à condição.\n");
    }
    return 0;
}