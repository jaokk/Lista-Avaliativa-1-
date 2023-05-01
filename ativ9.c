#include <stdio.h>

int main() {
    int escolha, quantidade;
    float Total = 0;

    printf("Lojinha\n");
    do {
        printf("\nEscolha uma fruta:\n");
        printf("1 => ABACATE - 0,70 a unidade\n");
        printf("2 => BANANA - 9,00 a unidade\n");
        printf("3 => UVA - 7,00 a unidade\n");
        printf("4 => PERA - 1,99 a unidade\n");
        printf("5 => MAÇA - 6,00 a unidade\n");
        printf("6 => CHUCHU - 4,00 a unidade\n");
        printf("7 => LARANJA - 0,99 a unidade\n");
        printf("8 Finalizar compra\n");

        printf("\nDigite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nQuantos Abacates? ");
                scanf("%d", &quantidade);
                Total += quantidade * 0.7;
                break;
            case 2:
                printf("\nQuantas Bananas? ");
                scanf("%d", &quantidade);
                Total += quantidade * 9.0;
                break;
            case 3:
                printf("\nQuantas uvas? ");
                scanf("%d", &quantidade);
                Total += quantidade * 7.0;
                break;
            case 4:
                printf("\nQuantas peras? ");
                scanf("%d", &quantidade);
                Total += quantidade * 1.99;
                break;
            case 5:
                printf("\nQuantas maças? ");
                scanf("%d", &quantidade);
                Total += quantidade * 6.00;
                break;
            case 6:
                printf("\nQuantos chuchu? ");
                scanf("%d", &quantidade);
                Total += quantidade * 4.00;
                break;
            case 7:
                printf("\nQuantas laranjas? ");
                scanf("%d", &quantidade);
                Total += quantidade * 0.99;
                break;
            case 8:
                break;
            default:
                printf("\nError. escolha novamente.\n");
        }
    } while (escolha != 8);

    printf("\nO valor total é: R$ %.2f\n", Total);

    return 0;
}
