#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario, novosalario, aux, aumento;
	
	printf("Digite o salário: ");
	scanf("%f", &salario);
	
	aumento = 0.25;

    aux = salario*aumento;    
    novosalario = salario+aux;

    printf("O salário pós aumento é: %.2f\n", novosalario);
	
	system("PAUSE");
	return 0; 
}
