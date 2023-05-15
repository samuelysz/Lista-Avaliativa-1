#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    float ponto1_x, ponto1_y, ponto2_x, ponto2_y, distancia;

    printf("Digite o valor de x para o primeiro ponto (ponto1_x): ");
    scanf("%f", &ponto1_x);

    printf("Digite o valor de y para o primeiro ponto (ponto1_y): ");
    scanf("%f", &ponto1_y);

    printf("Digite o valor de x para o segundo ponto (ponto2_x): ");
    scanf("%f", &ponto2_x);

    printf("Digite o valor de y para o segundo ponto (ponto2_y): ");
    scanf("%f", &ponto2_y);

    distancia = sqrtf(powf(ponto2_x - ponto1_x, 2) + powf(ponto2_y - ponto1_y, 2));

    printf("A distância entre os pontos é: %.4f\n", distancia);

    return 0;
}
