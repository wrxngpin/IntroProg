#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	
    float nota1, nota2, media, mediaclasse, mediaA1, mediaA2, mediaA3, mediaA4, mediaA5, mediaA6;
    int i, alunosaprovados, alunosreprovados, alunosexame;
    
    mediaclasse = 0;
    alunosaprovados = 0;
    alunosreprovados = 0;
    alunosexame = 0;
    
    setlocale(LC_ALL, "Portuguese");
    
    for (i = 0; i < 6; i++) {
        printf("\nAluno %d\n", i + 1);

        do {
            printf("\nDigite a primeira nota (0 a 10): ");
            scanf("%f", &nota1);
        } while (nota1 < 0 || nota1 > 10);

        do {
            printf("Digite a segunda nota (0 a 10): ");
            scanf("%f", &nota2);
        } while (nota2 < 0 || nota2 > 10);

        media = (nota1 + nota2) / 2;
        
		if(media >= 0 && media < 4){
			printf("Aluno %d reprovado com média %.2f\n", i + 1, media);
			
			alunosreprovados = (alunosreprovados+1);
		}
		else if(media >= 4 && media <7)
		{
			printf("Aluno %d está de exame com média %.2f\n", i+1, media);
			
			alunosexame = (alunosexame+1);
		}
        else if(media <= 10 && media >=7)
        {
        	printf("Aluno %d está aprovado com média %.2f\n", i+1, media);
			
			alunosaprovados = (alunosaprovados+1);
		}
        
        mediaclasse = mediaclasse+media;
        
    }
    
    mediaclasse = (mediaclasse/6);
    
	printf("\nTotal de alunos aprovados: %d\n", alunosaprovados);
	printf("Total de alunos de exame: %d\n", alunosexame);
	printf("Total de alunos reprovados: %d\n", alunosreprovados);
	
	printf("A média da classe foi %.2f\n", mediaclasse);
	
	
	system("PAUSE");
    return 0;
}

