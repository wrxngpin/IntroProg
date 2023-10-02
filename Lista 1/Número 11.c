#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int celsius, fahrenheit;
	
	printf("Digite a temperatura em graus celsius: ");
	scanf("%d", &celsius);
	
	fahrenheit = (1.8*celsius)+32;
	
	printf("A temperatura em fahrenheit é: %d°\n", fahrenheit);
	
	system("PAUSE");
	return 0;
}

