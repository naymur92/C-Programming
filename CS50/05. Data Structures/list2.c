#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // list of size 3
  int *list = malloc(3 * sizeof(int));
  if (list == NULL)
  {
    return 1;
  }

  // initialize numbers to list
  list[0] = 1;
  list[1] = 2;
  list[2] = 3;

  // resize list to size 4
  int *tmp = realloc(list, 4 * sizeof(int));

  if (tmp == NULL)
  {
    free(list);
    return 1;
  }

  // copy tmp list to old list
  list = tmp;

  // set 4th value to tmp list
  list[3] = 4;

  // print list
  for (int i = 0; i < 4; i++)
  {
    printf("%i\n", list[i]);
  }

  // free list
  free(list);
  return 0;
}