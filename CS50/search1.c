// implements linear search algorithm for strings
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  string strings[] = {"book", "pencil", "programming", "problem", "job", "iron", "language"};

  string s = get_string("String: ");

  for (int i = 0; i < 7; i++)
  {
    if (strcmp(strings[i], s) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}