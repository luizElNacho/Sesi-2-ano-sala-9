#include <stdio.h>

int main() {
    float m[3][6], soma_col_imp = 0, soma_2_4 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%f", &m[i][j]);
            if (j % 2 != 0) soma_col_imp += m[i][j];
            if (j == 1 || j == 3) soma_2_4 += m[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        m[i][5] = m[i][0] + m[i][1];
    }
    printf("%f\n%f\n", soma_col_imp, soma_2_4 / 6.0);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) printf("%f ", m[i][j]);
        printf("\n");
    }
    return 0;
}