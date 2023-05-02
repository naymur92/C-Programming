// linked list with command line argument
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *next;
} node;

int main(int argc, char *argv[])
{
  // memory for numbers
  node *list = NULL;

  // for each command-line argument
  for (int i = 1; i < argc; i++)
  {
    // convert argument to int
    int number = atoi(argv[i]);

    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
      return 1;
    }

    n->number = number;
    n->next = NULL;

    // prepend to list
    n->next = list;
    list = n;
  }

  // print numbers
  node *ptr = list;
  while (ptr != NULL)
  {
    printf("%i\n", ptr->number);
    ptr = ptr->next;
  }

  // free memory
  while (list != NULL)
  {
    node *tmp = list->next;
    free(list);
    list = tmp;
  }
}