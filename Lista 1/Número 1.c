#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, soma;
	
	printf("Digite 4 números: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	soma = n1+n2+n3+n4;
	
	printf("Soma: %d\n", soma);
	
	system("PAUSE");
	
	return 0;
}
