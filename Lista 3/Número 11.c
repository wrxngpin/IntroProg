#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int numeros[10];
    int quantidade_primos = 0;
    int i, j;

    printf("Digite 10 números inteiros positivos\n");

    for (i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        int eh_primo = 1;

        if (numeros[i] < 2) {
            eh_primo = 0;
        } else {
            for (j = 2; j * j <= numeros[i]; j++) {
                if (numeros[i] % j == 0) {
                    eh_primo = 0;
                    break;
                }
            }
        }

        if (eh_primo == 1) {
            quantidade_primos++;
        }
    }

    printf("\nQuantidade de números primos: %d\n", quantidade_primos);
    
    
	system("PAUSE");
    return 0;
}




