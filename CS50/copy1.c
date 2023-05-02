#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  // get a string
  string s = get_string("s: ");

  // copy strings address
  string t = s;

  // capitalize first letter in string
  if (strlen(t) > 0)
  {
    t[0] = toupper(t[0]);
  }

  // print strings
  printf("%s\n", s);
  printf("%s\n", t);
}