#include <stdlib.h>
#include <stdio.h>

int main(){
	int num1, num2, num3, soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	printf("Digite o terceiro número: ");
	scanf("%d", &num3);
	
	soma = num1 + num2 + num3;
	
	printf("A soma é: %d \n", soma);
	
	return 0;
} 