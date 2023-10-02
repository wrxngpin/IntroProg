#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	
	setlocale (LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, somanotas, media;
	
	printf("Entre com três notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	somanotas = nota1+nota2+nota3;
	
	media = somanotas/3;
	
	printf("A média aritmética simples é: %.2f\n", media);
	
	system("PAUSE");
	
	return 0; 
	
}
