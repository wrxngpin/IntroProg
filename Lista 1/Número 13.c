#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char aluno1[10], aluno2[10], aluno3[10], aluno4[10];
	double nota1, nota2, nota3, nota4;
	
	printf("Digite o nome e nota: ");
	scanf("%s %lf", aluno1, &nota1);
	
	printf("Digite o nome e nota: ");
	scanf("%s %lf", aluno2, &nota2);
	
	printf("Digite o nome e nota: ");
	scanf("%s %lf", aluno3, &nota3);
	
	printf("Digite o nome e nota: ");
	scanf("%s %lf", aluno4, &nota4);
	
	printf("\n\tNome\tNota\n");
	printf("\t====\t====\n");
	
	printf("\t%s\t%.2lf\n", aluno1, nota1);
	printf("\t%s\t%.2lf\n", aluno2, nota2);
	printf("\t%s\t%.2lf\n", aluno3, nota3);
	printf("\t%s\t%.2lf\n\n", aluno4, nota4);
		
	system("PAUSE");
	return 0;
}
