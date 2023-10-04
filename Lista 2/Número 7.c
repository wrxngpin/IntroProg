#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PESOLAB 2
#define PESOSEMESTRAL 3
#define PESOEXAMFINAL 5

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	double trablab, avsemestral, examfinal, mediaponderada;
	
	printf("Digite respectivamente as notas do trabalho de laboratório, avaliação semestral e exame final: ");
	scanf("%lf %lf %lf", &trablab, &avsemestral, &examfinal);
	
	
	mediaponderada = ((trablab*PESOLAB)+(avsemestral*PESOSEMESTRAL)+(examfinal*PESOEXAMFINAL))/(PESOLAB+PESOSEMESTRAL+PESOEXAMFINAL); 
	
	if(mediaponderada >= 8.0)
	{
		printf("\nO aluno ficou com média %.2lf e conceito A\n", mediaponderada);
	}
	else if(mediaponderada < 8.0 && mediaponderada >= 7.0)
	{
		printf("\nO aluno ficou com média %.2lf e conceito B\n", mediaponderada);
	}
	else if(mediaponderada < 7.0 && mediaponderada >= 6.0)
	{
		printf("\nO aluno ficou com média %.2lf e conceito C\n", mediaponderada);
	}
	else if(mediaponderada < 6.0 && mediaponderada >= 5.0)
	{
		printf("\nO aluno ficou com média %.2lf e conceito D\n", mediaponderada);
	}
	else {
		printf("\nO aluno ficou com média %.2lf e conceito E\n", mediaponderada);
	}

	system("PAUSE");
	return 0;
}
