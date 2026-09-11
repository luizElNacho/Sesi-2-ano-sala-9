#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2;

printf("Digite o número: ");
scanf("%d", &num1);

printf("Digite outro número: ");
scanf("%d", &num2);

if (num1 > num2) {
    printf("Número 1 maior");
} else if (num1 < num2) {
    printf("Número 2 maior");
} else {
    printf("Número iguais");
}

return 0;

}