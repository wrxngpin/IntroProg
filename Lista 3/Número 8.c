#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, idade, acimadecinquenta, contpesoinferior40, contmediaentre10e20;
	double altura, peso, mediaentre10e20, somaentre10e20, porcentagemabaixo40;
	
	
	acimadecinquenta = 0;
	contmediaentre10e20 = 0;
	mediaentre10e20 = 0;
	somaentre10e20 = 0;
	contpesoinferior40 = 0;
	
	
	for(i=0; i<25; i++){
	
	printf("\nDados da pessoa %d:\n", (i+1));

	printf("\nIdade: ");
	scanf("%d", &idade);

	printf("\nAltura (em metros): ");
	scanf("%lf", &altura);
	
	printf("\nPeso (em quilos): ");
	scanf("%lf", &peso);
	
	if(idade > 50){
		acimadecinquenta = (acimadecinquenta+1);
	}
		
	if(idade >= 10 && idade <= 20)
	{
		somaentre10e20 = (somaentre10e20+altura);
		contmediaentre10e20 = (contmediaentre10e20+1);
	}
	
	if(peso <40){
		contpesoinferior40 = (contpesoinferior40+1);
	}
	
}
		if(contmediaentre10e20 > 0){
			
		mediaentre10e20 = (somaentre10e20/contmediaentre10e20);
	}
	
		porcentagemabaixo40 = ((float)contpesoinferior40/25)*100;
		
		printf("\nA quantidade de pessoas com altura superior a 50 anos é: %d\n", acimadecinquenta);
		printf("A média	das alturas das pessoas com idade entre 10 e 20 anos é: %.2lf\n", mediaentre10e20);
		printf("A porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisas é de %.0lf porcento.", porcentagemabaixo40);
		
	system("PAUSE");
	return 0;
}
