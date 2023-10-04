#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	double a, b, c, delta, x1, x2;

do {
	
	printf("A variável a deve ser diferente de 0\n");
	printf("Digite respectivamente a, b e c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
} while (a == 0);

	delta = (b*b)-(4*a*c);
	
	if(delta < 0) {
		printf("\nNão existe raiz real\n");
	}
	else if(delta == 0)
	{
		x1 = (-b)/(2*a);
		
		printf("\nx1: %.2lf\n", x1);
		
	}
	else
	{
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		
		printf("\nx1: %.2lf\n", x1);
		printf("x2: %.2lf\n", x2);
	}
	
	system("PAUSE");
	return 0;	
}
