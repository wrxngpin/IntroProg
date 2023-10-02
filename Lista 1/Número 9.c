#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>		

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int cateto1, cateto2, somacatetos;
	float hipotenusa;	
	
	printf("Digite o cateto 1 e o cateto 2: ");
	scanf("%d  %d", &cateto1, &cateto2);
	
	cateto1 = cateto1*cateto1;
	cateto2 = cateto2*cateto2;
	
	somacatetos = (cateto1+cateto2);
	
	hipotenusa = sqrt(somacatetos);
	
	printf("A hipotenusa é: %.2f\n", hipotenusa);
	
	system("PAUSE");
	return 0;
}
