#include <stdio.h>

int main() {
    float v[10], soma_pos = 0;
    int neg = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        if (v[i] < 0) {
            neg++;
        } else {
            soma_pos += v[i];
        }
    }
    printf("%d %f\n", neg, soma_pos);
    return 0;
}