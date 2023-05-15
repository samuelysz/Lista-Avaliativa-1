#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int i, numeros[10], soma = 0;
    float media;

    printf("Digite 10 números inteiros:\n");

    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float)soma / 10;

    printf("A média dos números é: %.2f\n", media);

    return 0;
}

