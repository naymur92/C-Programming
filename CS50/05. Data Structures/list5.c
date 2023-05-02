#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *next;
} node;

int main(int argc, char *argv[])
{
  node *list = NULL;

  for (int i = 1; i < argc; i++)
  {
    int number = atoi(argv[i]);

    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
      return 1;
    }
    n->number = number;
    n->next = NULL;

    // if list is empty
    if (list == NULL)
    {
      list = n;
    }
    // if list not empty
    else
    {
      // iterate over nodes in list
      for (node *ptr = list; ptr != NULL; ptr = ptr->next)
      {
        if (ptr->next == NULL)
        {
          // append node
          ptr->next = n;
          break;
        }
      }
    }
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