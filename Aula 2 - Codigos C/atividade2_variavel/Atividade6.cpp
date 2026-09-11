#include <stdlib.h>
#include <stdio.h>

int main() {
	float celcius, fah;
	
	printf("Digite a temperatura em celcius \n");
	scanf("%f", &celcius);
	
	fah = celcius * (9.0 / 5.0) + 32.0;
	
	printf("Temperatura em Fahrenheit: %2.f", fah);
	
}