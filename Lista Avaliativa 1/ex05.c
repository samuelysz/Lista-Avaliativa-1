#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int numero, i;

    printf("Digite um n�mero positivo: ");
    scanf("%d", &numero);

    printf("Os divisores de %d s�o: ", numero);
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
