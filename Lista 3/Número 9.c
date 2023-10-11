#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, i, cont_idadeMaior50pesoInferior60, cont_alturamenor150, somaidade, cont_olhoazul, ruiva_semolhoazul;
	double peso, altura, porcentagemolhoazul, mediaalturamenor150;
	char cor_olho, corcabelo;
	
	cont_idadeMaior50pesoInferior60 = 0;
	somaidade = 0;
	cont_alturamenor150 = 0;
	ruiva_semolhoazul = 0;
	porcentagemolhoazul = 0;
	mediaalturamenor150 = 0;
	cont_olhoazul = 0;
	
	for(i =0; i<20; i++){
		
		printf("\nPessoa número %d\n", i+1);
		
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		printf("Digite o peso: ");
		scanf("%lf", &peso);
		
		printf("Digite a altura: ");
		scanf("%lf", &altura);
		
		printf("Digite o código da cor dos olhos(A-azul, P-preto, V-verde, C-castanho): ");
		scanf(" %s", &cor_olho);
		
		if(cor_olho == 'A'){
			cont_olhoazul = cont_olhoazul+1;
		}	
		
		printf("Digite o código da cor dos cabelos(P-preto, C-castanho, L-louro e R-ruivo): ");
		scanf(" %s", &corcabelo);
		
		if(idade>50 && peso<60){
			cont_idadeMaior50pesoInferior60++;
		}
		
		if(altura < 1.50){
			
			somaidade = somaidade+idade;
			cont_alturamenor150++;
		}
		
		if(corcabelo == 'R' && cor_olho != 'A')
		{
			ruiva_semolhoazul++;
		}
		
	}
	
	if(cont_alturamenor150>0){
		mediaalturamenor150	= (somaidade/cont_alturamenor150);
		
	}
	
	porcentagemolhoazul = ((float)cont_olhoazul/20)*100;

	printf("\nA quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos é: %d\n", cont_idadeMaior50pesoInferior60);
	printf("A média das idades das pessoas com altura inferior a 1,50 metros é: %.1lf\n", mediaalturamenor150);
	printf("A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas é %.1lf porcento\n", porcentagemolhoazul);
	printf("A quantidade de pessoas ruivas e que não possuem olhos azuis é: %d\n", ruiva_semolhoazul);
	
	system("PAUSE");
	return 0;
}
