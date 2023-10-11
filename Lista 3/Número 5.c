#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	printf("\nTabuada do 1: \n");
	for(i=1; i<=10; i++){
		printf("1x%d: %d\n", i, (1*i));
	}
	
	printf("\nTabuada do 2: \n");
	for(i=1; i<=10; i++){
		printf("2x%d: %d\n", i, (2*i));
	}
	
	printf("\nTabuada do 3: \n");
	for(i=1; i<=10; i++){
		printf("3x%d: %d\n", i, (3*i));
	}
	
	printf("\nTabuada do 4: \n");
	for(i=1; i<=10; i++){
		printf("4x%d: %d\n", i, (4*i));
	}
	
	printf("\nTabuada do 5: \n");
	for(i=1; i<=10; i++){
		printf("5x%d: %d\n", i, (5*i));
	}
	
	printf("\nTabuada do 6: \n");
	for(i=1; i<=10; i++){
		printf("6x%d: %d\n", i, (6*i));
	}
	
	printf("\nTabuada do 7: \n");
	for(i=1; i<=10; i++){
		printf("7x%d: %d\n", i, (7*i));
	}
	
	printf("\nTabuada do 8: \n");
	for(i=1; i<=10; i++){
		printf("8x%d: %d\n", i, (8*i));
	}
	
	printf("\nTabuada do 9: \n");
	for(i=1; i<=10; i++){
		printf("9x%d: %d\n", i, (9*i));
	}
	
	printf("\nTabuada do 10: \n");
	for(i=1; i<=10; i++){
		printf("10x%d: %d\n", i, (10*i));
	}
	system("PAUSE");
	return 0;
}
