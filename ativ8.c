#include <stdio.h>

int main() {
    int num, max = 0, min = 100000;

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        if (num >= 0) {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
    } while (num >= 0);

    printf("O maior numero foi: %d\n", max);
    printf("O menor numero foi: %d\n", min);

    return 0;
}
