#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  // get two strings
  char *s = get_string("s: ");
  char *t = get_string("t: ");

  printf("%s\n", s);
  printf("%s\n", t);
}