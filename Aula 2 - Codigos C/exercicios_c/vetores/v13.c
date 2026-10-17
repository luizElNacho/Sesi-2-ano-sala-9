#include <stdio.h>

int main() {
    int v[5], p_maior = 0, p_menor = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }
    for (int i = 1; i < 5; i++) {
        if (v[i] > v[p_maior]) p_maior = i;
        if (v[i] < v[p_menor]) p_menor = i;
    }
    printf("%d %d\n", p_maior, p_menor);
    return 0;
}