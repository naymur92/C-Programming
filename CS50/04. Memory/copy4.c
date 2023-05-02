#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  // get a string
  string s = get_string("s: ");
  int n = strlen(s);

  // alocate memory for another string
  char *t = malloc(n + 1);

  // copy strings into memory
  strcpy(t, s);

  // capitalize first letter in string
  if (strlen(t) > 0)
  {
    t[0] = toupper(t[0]);
  }

  // print strings
  printf("%s\n", s);
  printf("%s\n", t);
}