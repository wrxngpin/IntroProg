#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char codigo;
	int i;
	double valor, total_a_vista, total_a_prazo, total_compras;
	
	total_a_vista = 0;
	total_a_prazo = 0;
	total_compras = 0;
	
	for(i=1; i<=15; i++) {
	
		printf("\nTransação %d\n", i);
			
		do{
			printf("Digite o codigo (V para a vista, P para a prazo): ");
            scanf("%s", &codigo);
            
        } while (codigo != 'V' && codigo != 'P');
        
        do {
        	printf("Digite o valor da transação: ");
        	scanf("%lf", &valor);
        	
		} while(valor <=0);
        
        if(codigo == 'V'){
        	total_a_vista = (total_a_vista+valor);
		}
        else if(codigo == 'P'){
        	total_a_prazo = (total_a_prazo+valor);
		}
        
        total_compras = (total_compras+valor);
}
	printf("\nValor total das compras á vista: %.2lf\n", total_a_vista);
	printf("Valor total das compras á prazo: %.2lf\n", total_a_prazo);
	printf("Valor total das compras: %.2lf\n", total_compras);
	
	system("PAUSE");
	return 0;
}
