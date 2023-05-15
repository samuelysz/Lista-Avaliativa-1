#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int num1, maior, menor;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    maior = num1;
    menor = num1;

    while (num1 >= 0) {
        if (num1 > maior) {
            maior = num1;
        } else if (num1 < menor) {
            menor = num1;
        }

        printf("Digite outro número inteiro: ");
        scanf("%d", &num1);
    }

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}

