#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario, auxiliar, aumentodefinitivo, novosalario, valoraumento, percentual;
	
	printf("Digite o salário: ");
	scanf("%f", &salario);
	
	printf("Digite o percentual de aumento: ");
	scanf("%f", &percentual);
	
	auxiliar = percentual/100;
	
	aumentodefinitivo = salario*auxiliar;
	
	novosalario = salario+aumentodefinitivo;
	
	valoraumento = novosalario-salario;
	
	printf("O novo salário é: %.2f\n", novosalario);
	printf("O valor do aumento foi de %.2f\n", valoraumento);
	
	system("PAUSE");
	return 0;
}
