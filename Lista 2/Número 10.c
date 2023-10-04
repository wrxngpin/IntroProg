#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	double x, y, z;
	
	printf("Digite respectivamente x, y e z: ");
	scanf("%lf %lf %lf", &x, &y, &z);
	
	if(x < (y+z) && y < (x+z) && z < (x+y))
	{
		if ( x == y && x == z)
		{
			printf("\nx, y e z digitados formam um triângulo equilátero.\n");
			}	
		else if(x == y || y == z || x == z)
		{
			printf("\nx, y e z digitados formam um triângulo isósceles.\n");
		}
		else
		{
			printf("\nx, y e z digitados formam um triângulo escaleno.\n");
		}
	}
	else {
	
	printf("\nx, y e z digitados não formam um triângulo.\n");
}
	system("PAUSE");	
	return 0;
}
