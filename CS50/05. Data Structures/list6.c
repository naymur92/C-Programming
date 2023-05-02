// implements a sorted list of numbers using a linked list
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
    // if number belongs beginning of list
    else if (n->number < list->number)
    {
      n->next = list;
      list = n;
    }
    // if number belongs later in list
    else
    {
      for (node *ptr = list; ptr != NULL; ptr = ptr->next)
      {
        // if at the end of list
        if (ptr->next == NULL)
        {
          ptr->next = n;
          break;
        }

        // if in middle of list
        if (n->number < ptr->next->number)
        {
          n->next = ptr->next;
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