#include <stdio.h>
#include <stdlib.h>

int main() {
    int cartela[5][5], usados[100] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int num;
            do {
                num = rand() % 100;
            } while (usados[num]);
            usados[num] = 1;
            cartela[i][j] = num;
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");
    }
    return 0;
}