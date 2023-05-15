#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int n, a, b, i, resultado;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    a = 0;
    b = 1;
    resultado = 0;

    if (n == 0) {
        resultado = a;
    } else if (n == 1) {
        resultado = b;
    } else {
        for (i = 2; i <= n; i++) {
            resultado = a + b;
            a = b;
            b = resultado;
        }
    }

    printf("Na sequencia de Fibonacci o numero digitado é: %d\n", resultado);

    return 0;
}
