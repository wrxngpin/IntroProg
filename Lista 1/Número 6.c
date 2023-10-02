#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	float raizQ, raizC;
	
	printf("Digite um número maior que 0: ");
	scanf("%d", &n);
	
	raizQ = sqrt(n);

	raizC = cbrt(n);
	
	printf("%d ao quadrado é: %d\n", n, n*n);
	printf("%d ao cubo é: %d\n", n, (n*n)*n);
	printf("A raiz quadrada de %d é: %.2f\n", n, raizQ);
	printf("A raiz cúbica de %d é: %.2f\n", n, raizC);
	
	
	
	system("PAUSE");
	return 0;
}
