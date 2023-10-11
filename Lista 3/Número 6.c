#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	double base, altura, area;
	
	do{
		printf("Digite a base: ");
		scanf("%lf", &base);
		
	}while(base <= 0);
	
	do{
		printf("Digite a altura: ");
		scanf("%lf", &altura);
		s
	}while(altura <= 0);
	
	area = (base*altura)/2;
	
	printf("\nA área desse triângulo é: %.2lf centrimetros quadrados.\n", area);
	
	system("PAUSE");
	return 0;
}
