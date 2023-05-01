#include <stdio.h>
#include <math.h>

int main() {

  float pi=3.14159;
  float R, volume, area;

  printf("Declare o valor de R:");
  scanf("%f", &R);

  area = 4 * pi * pow(R, 2);
  volume = (4/3.0) * pi * pow(R, 3);

  printf("Area = %f\n", area);
  printf("Volume = %f", volume);
  
    return 0;
}