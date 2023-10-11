#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int numeros[10];
    int soma_pares, soma_primos, i, j;
    
    soma_pares = 0;
    soma_primos = 0;
    
    printf("Digite 10 números\n");

    for (i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            soma_pares += numeros[i];
        }

        int eh_primo = 1; 
        if (numeros[i] < 2) {
            eh_primo = 0;  
        } else {
            for ( j= 2; j * j <= numeros[i]; j++) {
                if (numeros[i] % j == 0) {
                    eh_primo = 0;  
                    break;
                }
            }
        }

        if (eh_primo == 1) {
            soma_primos += numeros[i];
        }
    }

    printf("\nSoma dos números pares: %d\n", soma_pares);
    printf("Soma dos números primos: %d\n", soma_primos);

	system("PAUSE");
    return 0;
}
