#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	int i, n, termo1, termo2, termoprox;
	
	termo1 = 0;
	termo2 = 1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	
	printf("\nSequência de Fibonacci\n");
	
	for(i=1; i<=n; i++)
	{
		printf("%d, ", termo1);
		
		termoprox = (termo1+termo2);
		termo1 = termo2;
		termo2 = termoprox;
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
