#include <stdio.h>
#include <cs50.h>

int main(void)
{
  long x = get_long("x: ");
  long y = get_long("y: ");

  // without type casting
  // float z = x / y;
  // 2/3=0.00000

  // with type casting
  float z = (float) x / (float) y;
  // 2/3=0.666667

  // printf("%f\n", z);

  // with floating-point imprecision
  printf("%.20f\n", z);
}