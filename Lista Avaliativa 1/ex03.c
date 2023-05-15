#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    const float pi = 3.14159;
    float raio;
    float area, volume;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0/3.0) * pi * raio * raio * raio;
    area = 4.0 * pi * raio * raio;

    printf("Área da esfera: %.4f\n", area);
    printf("Volume da esfera: %.4f\n", volume);

    return 0;
}
