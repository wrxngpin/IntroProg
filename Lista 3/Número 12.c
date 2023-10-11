#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    int idade, opiniao, i;
    int total_espectadores = 15;
    int total_idade_otimo = 0, quantidade_regular = 0, quantidade_bom = 0;

	setlocale(LC_ALL, "Portuguese");
    for (i = 0; i < total_espectadores; i++) {
        printf("Dados do espectador %d\n", i + 1);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Opiniao (3-otimo, 2-bom, 1-regular): ");
        scanf("%d", &opiniao);

        if (opiniao == 3) {
            total_idade_otimo += idade;
        }

        if (opiniao == 1) {
            quantidade_regular++;
        }

        if (opiniao == 2) {
            quantidade_bom++;
        }
    }

    float media_idade_otimo = total_idade_otimo / (float)quantidade_bom;
    float percentagem_bom = (quantidade_bom / (float)total_espectadores) * 100;

    printf("\nEstatisticas:\n");
    printf("Media das idades das pessoas que responderam otimo: %.2f\n", media_idade_otimo);
    printf("Quantidade de pessoas que responderam regular: %d\n", quantidade_regular);
    printf("Percentagem de pessoas que responderam bom: %.2f%%\n", percentagem_bom);

	system("PAUSE");
    return 0;
}
