#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int i, numeros[10], soma = 0;
    float media;

    printf("Digite 10 n�meros inteiros:\n");

    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float)soma / 10;

    printf("A m�dia dos n�meros �: %.2f\n", media);

    return 0;
}

