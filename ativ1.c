#include <stdio.h>

int main() {
  int A, B, C, D;
  int DIFERENCA;
  
  printf("Escolha um numero inteiro para A: ");
  scanf("%d", &A);
  printf("Escolha um numero inteiro para B: ");
  scanf("%d", &B);
  printf("Escolha um numero inteiro para C: ");
  scanf("%d", &C);
  printf("Escolha um numero inteiro para D: ");
  scanf("%d", &D);

  DIFERENCA=A*B-C*D;

  printf("DIFERENCA=(%d * %d - %d * %d)\n", A,B,C,D);
  printf("DIFERENCA=(%d)", DIFERENCA);
  
    return 0;
}
