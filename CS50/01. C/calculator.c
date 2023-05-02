#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");

  int sum = x + y;

  printf("Sum is: %i\n", sum);
}