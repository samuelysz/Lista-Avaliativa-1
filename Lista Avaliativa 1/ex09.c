#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 15/05

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int continuar = 1;
    float total = 0.0;
    int opcao, quantidade;

    while (continuar) {

        printf("==============================\n");
        printf("     Menu de Frutas\n");
        printf("==============================\n");
        printf("1. ABACAXI - R$ 5.00 \n");
        printf("2. MAÇA    - R$ 1.00 \n");
        printf("3. PERA    - R$ 4.00 \n");
        printf("4. Sair\n");
        printf("==============================\n");
        printf("Escolha uma fruta (1-4): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis desejada: ");
                scanf("%d", &quantidade);
                total += 5.0 * quantidade;
                break;
            case 2:
                printf("Digite a quantidade de maçãs desejada: ");
                scanf("%d", &quantidade);
                total += 1.0 * quantidade;
                break;
            case 3:
                printf("Digite a quantidade de peras desejada: ");
                scanf("%d", &quantidade);
                total += 4.0 * quantidade;
                break;
            case 4:
                continuar = 0;
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("\n");
    }

    printf("==============================\n");
    printf("  Valor total da compra\n");
    printf("==============================\n");
    printf("R$ %.2f\n", total);

    return 0;
}

