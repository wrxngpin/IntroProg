#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
		
	double nota1, nota2, nota3, nota4, media;
	
	printf("Digite quatro notas: ");
	scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	if (media >= 7.0)
	{
		printf("\n\aAluno aprovado com %.2lf de média.\n", media);
	}
	else
	printf("\n\aAluno reprovado com %.2lf de média.\n", media);
	
	system("PAUSE");
	return 0;
}
