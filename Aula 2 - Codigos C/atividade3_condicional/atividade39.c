#include <stdio.h>

int main() {
    float salario, reajuste = 0, bonus = 0, salarioFinal;
    int tempo;

    printf("Digite o salário atual e o tempo de serviço (anos): ");
    scanf("%f %d", &salario, &tempo);

    if (salario <= 500.0) reajuste = 0.25;
    else if (salario <= 1000.0) reajuste = 0.20;
    else if (salario <= 1500.0) reajuste = 0.15;
    else if (salario <= 2000.0) reajuste = 0.10;

    if (tempo >= 1 && tempo <= 3) bonus = 100.0;
    else if (tempo >= 4 && tempo <= 6) bonus = 200.0;
    else if (tempo >= 7 && tempo <= 10) bonus = 300.0;
    else if (tempo > 10) bonus = 500.0;

    if (reajuste == 0 && bonus == 0) {
        printf("Sem direito a aumento ou bônus.\n");
    } else {
        salarioFinal = salario * (1 + reajuste) + bonus;
        printf("Salário reajustado: R$ %.2f\n", salarioFinal);
    }
    return 0;
}