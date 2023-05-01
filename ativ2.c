#include <stdio.h>
#include <math.h>

int main() {
  int p1[2];
  int p2[2];
  float distancia;

  printf("Declare o valor de X para p1: ");
  scanf("%d", &p1[0]);
  printf("Declare o valor de Y para p1: ");
  scanf("%d", &p1[1]);
  printf("Declare o valor de X para p2: ");
  scanf("%d", &p2[0]);
  printf("Declare o valor de Y para p2: ");
  scanf("%d", &p2[1]);

  distancia=sqrt((p1[0]-p1[1])^2 + (p2[0]-p2[1])^2);

  printf("%.4f", distancia);
  
    return 0;
}