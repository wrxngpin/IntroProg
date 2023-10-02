#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.14

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int raio;
	double comprimento, volume, area;
	
 	printf("Digite o raio em cm: ");
 	scanf("%d", &raio);
 	
 	comprimento = 2*PI*raio;
 	area = 4*PI*(raio*raio);
 	volume = (4.0/3)*PI*(raio*raio*raio);
 	
	printf("O comprimento em cm cúbicos é: %.2lf\n", comprimento);
	printf("A area em cm quadrados é: %.2lf\n", area);
	printf("O volume em cm cúbicos é: %.2lf\n", volume);
	
	
	system("PAUSE");
	return 0;
}
