#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite o número: ");
	scanf("%d", &numero);
	
	if(numero%2==0)
	{
		printf("O número %d é par\n", numero);
	}
	else
	printf("O número %d é ímpar\n", numero);
	
	system("PAUSE");
	return 0;
}
