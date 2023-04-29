#include <stdio.h>
#include <cs50.h>

int main(void)
{
  long x = get_long("x: ");
  long y = get_long("y: ");

  long sum = x + y;

  printf("Sum is: %li\n", sum);
}