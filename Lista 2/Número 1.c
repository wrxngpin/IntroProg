#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double numero1, numero2;
	
	printf("Entre com dois numeros: ");
	scanf("%lf %lf", &numero1, &numero2);
	
	if(numero1 > numero2) {
		
	printf("O maior número digitado é o %.0lf\n", numero1);
	}
	
	else
	if(numero2 > numero1) {
			printf("O maior número digitado é o %.0lf\n", numero2);
			
	}
	else
		printf("Os números são iguais\n");
		
	system("PAUSE");
	return 0;
}
