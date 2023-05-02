#include <stdio.h>

int main(void)
{
  int n = 40;
  int *p = &n;
  printf("%p\n", p);
}