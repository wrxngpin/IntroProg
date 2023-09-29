#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, soma, divisao, mult;
	
	printf("Entre com dois números: ");
	scanf("%d %d", &n1, &n2); 
	
	soma = n1+n2;
	divisao = n1/n2;
	mult = n1*n2;
	
	printf("Soma:  %d+%d = %d\n", n1, n2, soma);
	printf("Multiplicação: %d*%d = %d\n", n1, n2, mult);
	printf("Divisão: %d/%d = %.2f\n", n1, n2, (float)divisao);
	
	system("PAUSE");
	
	return 0;
}
