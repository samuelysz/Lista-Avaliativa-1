#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int a, b, c, d, resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("Digite o valor de D: ");
    scanf("%d", &d);

    resultado = (a * b) - (c * d);

    printf("A diferença do produto de A e B pelo produto de C e D é: %d\n", resultado);

    return 0;
}

