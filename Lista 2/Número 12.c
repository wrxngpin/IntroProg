#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	double tempo, velocidade, distancia, litros_usados;
	
	printf("Digite o tempo gasto na viagem, em horas: ");
	scanf("%lf", &tempo);
	
	printf("Digite a velocidade média da viagem: ");
	scanf("%lf", &velocidade);
	
	distancia = (tempo*velocidade);
	
	litros_usados = (distancia/12);
	
	printf("\nVelocidade média durante a viagem: %.2lf km\\h\n", velocidade);
	
	printf("Tempo gasto na viagem: %.2lf horas\n", tempo);
	
	printf("Distância percorrida na viagem: %.2lf km\n", distancia);
	
	printf("Litros utilizado na viagem: %.2lf litros\n", litros_usados);
	
	system("PAUSE");	
	return 0; 
}
