#include <stdio.h>

int main() {
    int div = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            div += i;
        }
    }

    printf("a soma dos multiplos de 3 ou 5 e: %d\n", div);

    return 0;
}