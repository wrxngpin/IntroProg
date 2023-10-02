#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float hora, min, horadeci;
	int horaint, minutos;
	
	printf("Digite a hora e minutos no formado h.m: ");
	scanf("%f", &hora);
	
	horaint = hora;	
	
	horadeci = hora-horaint;

	horaint = (horaint*60);
	horadeci = (horadeci*100);
	
	minutos = (horaint+horadeci);
	
	printf("A hora digitada em minutos é: %d\n", minutos);

	system("PAUSE");
	return 0;
}
