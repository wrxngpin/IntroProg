#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i;

	do{
	printf("Digite um número de 1 a 10: ");
	scanf("%d", &numero);
	} while(numero <=0 || numero>10);
	
	for(i=1; i<=10; i++){
		printf("%d\n", (numero*i));
	}
	
	system("PAUSE");
	return 0;
}
