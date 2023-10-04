#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	double numero1, numero2, soma, raizQ, divisao;

	printf("Menu de opções disponíveis:\n");
	printf("1 - Soma de dois números\n");
	printf("2 - Raiz quadrada de um número\n");
	printf("3 - Divisão de dois números\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &opcao);

    	switch(opcao) {
    		case 1:
    			printf("\nDigite dois números: ");
    			scanf("%lf %lf", &numero1, &numero2);
    			
    			soma = (numero1+numero2);
    			
    			printf("A soma entre os dois números é %.2lf\n", soma);
    			break;
    		case 2:
    			printf("\nDigite um número: ");
    			scanf("%lf", &numero1);
    			
    			raizQ = sqrt(numero1);
    			
    			printf("A raiz quadrada deste número é: %.2lf\n", raizQ);
    			
    			break;
    		case 3:
    			
    			printf("\nDigite dois números: ");
    			scanf("%lf %lf", &numero1, &numero2);
    			
    			divisao = (numero1/numero2);
    			
    			printf("A divisão entre esses dois números é: %.2lf\n", divisao);
    			
    			break;
    			
    		default: printf("\nA opção desejada não está disponível.\n");
		}
    
	system("PAUSE");
	return 0;
}
