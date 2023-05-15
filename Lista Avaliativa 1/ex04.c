#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05

#include <stdio.h>

int main() {

	setlocale(LC_ALL, "Portuguese");	

    float x, y;

    printf("Digite a coordenada x do ponto: ");
    scanf("%f", &x);

    printf("Digite a coordenada y do ponto: ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("O ponto está na Origem\n");
    } else if (x == 0) {
        printf("O ponto está sobre o Eixo Y\n");
    } else if (y == 0) {
        printf("O ponto está sobre o Eixo X\n");
    } else {
        if (x > 0 && y > 0) {
            printf("O ponto está no Quadrante 1\n");
        } else if (x < 0 && y > 0) {
            printf("O ponto está no Quadrante 2\n");
        } else if (x < 0 && y < 0) {
            printf("O ponto está no Quadrante 3\n");
        } else {
            printf("O ponto está no Quadrante 4\n");
        }
    }

    return 0;
}
