#include <stdio.h>

int main() {
    int v[10], x, mult = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < 10; i++) {
        if (v[i] % x == 0) {
            printf("%d ", v[i]);
            mult++;
        }
    }
    printf("\n%d\n", mult);
    return 0;
}