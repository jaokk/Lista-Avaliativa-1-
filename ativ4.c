#include <stdio.h>

int main() {
    float x, y;

    printf("Escolha o valor de X: ");
    scanf("%f", &x);
    printf("Escolha o valor de Y: ");
    scanf("%f", &y);
  
    if (x == 0 && y == 0) {
        printf("Origem\n");
    }
    else if (x == 0) {
        printf("Eixo Y\n");
    }
    else if (y == 0) {
        printf("Eixo X\n");
    }
    else if (x > 0 && y > 0) {
        printf("Q1\n");
    }
    else if (x < 0 && y > 0) {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0) {
        printf("Q3\n");
    }
    else {
        printf("Q4\n");
    }

    return 0;
}
