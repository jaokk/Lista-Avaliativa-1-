#include <stdio.h>

int main() {
    int num, soma = 0;
    float media;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &num);
        soma += num;
    }

    media = soma / 10;

    printf("\nA media dos numeros digitados eh: %.2f\n", media);

    return 0;
}