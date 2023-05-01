#include <stdio.h>

int main() {
    int x, fibonaci; 
    int valor1 = 0;
    int valor2 = 1;

    printf("Digite x: ");
    scanf("%d", &x);

    if (x == 0) {
        fibonaci = 0;
    } else if (x == 1) {
        fibonaci = 1;
    } else {
        for (int i = 2; i <= x; i++) {
            fibonaci = valor1 + valor2;
            valor1 = valor2;
            valor2 = fibonaci;
        }
    }

    printf("O enesimo termo e: %d\n", fibonaci);

    return 0;
}
