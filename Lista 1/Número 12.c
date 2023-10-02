#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], endereco[30], cep[15], tel[20];
	
	printf("Digite seu nome: ");
	scanf("%[^\n]%*c", nome);
	
	printf("Digite seu endereco: ");
	scanf("%[^\n]%*c", endereco);
	
	printf("Digite seu cep: ");
	scanf("%[^\n]%*c", cep);
	
	printf("Digite seu telefone: ");
	scanf("%[^\n]%*c", tel);
	
	printf("\nSeu nome é %s\n", nome);
	printf("Seu endereço é %s\n", endereco);
	printf("Seu cep é %s\n", cep);
	printf("Seu telefone é %s\n", tel);
	
	system("PAUSE");
	return 0;
}
