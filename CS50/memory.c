// demonstrates memory errors via valgrind
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *x = malloc(3 * sizeof(int));
  x[0] = 64;
  x[1] = 65;
  // x[2] = 66;
  x[3] = 67;

  // free(x);
}