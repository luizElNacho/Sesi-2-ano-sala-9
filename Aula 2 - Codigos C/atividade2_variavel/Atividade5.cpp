#include <stdlib.h>
#include <stdio.h>

int main() {
	float num;
	printf("Digite um número: \n");
	scanf("%f", &num);
	
	printf("O quinto do num é: %.2f \n", num / 5.0);
	
	return 0;
}