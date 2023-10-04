#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	double peso, altura;
	
	printf("Digite, respectivamente, o peso e a altura de uma pessoa: ");
	scanf("%lf %lf", &peso, &altura);
	
	if(altura < 1.20 && peso <= 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classificação é A.\n", peso, altura);
	}
	else if(altura < 1.20 && peso <= 90 && peso > 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classificação é D.\n", peso, altura);
	}
	else if(altura < 1.20 && peso > 90)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classificação é G.\n", peso, altura);
	}
	else if(altura >= 1.20 && altura <= 1.70 && peso <= 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classificação é B.\n", peso, altura);
	}
	else if(altura >= 1.20 && altura <= 1.70 && peso <= 90 && peso > 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classificação é E.\n", peso, altura);		
	}
	else if(altura >= 1.20 && altura <= 1.70 && peso > 90) {
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classificação é H.\n", peso, altura);
	}
	else if(altura > 1.70 && peso <= 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classificação é C.\n", peso, altura);	
	}
	else if(altura > 1.70 && peso <= 90 && peso > 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classificação é F.\n", peso, altura);
	}
	else if(altura > 1.70 && peso > 90) {
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classificação é I.\n", peso, altura);
	}
	
	system("PAUSE");
	return 0;
}

