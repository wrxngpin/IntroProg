#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int numeros[20];
    int i;

	setlocale(LC_ALL, "Portuguese");
	
    printf("Digite 20 números inteiros positivo:\n");

    for (i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmero   Fatorial\n");
    printf("------------------\n");

    for (i = 0; i < 20; i++) {
        printf("%-8d%.0lf\n", numeros[i], tgamma(numeros[i] + 1));
    }

	system("PAUSE");
    return 0;
}
