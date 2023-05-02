#include <stdio.h>
#include <cs50.h>

// prototype
int string_length(string s);

int main(void)
{
  string name = get_string("Name: ");
  int n = string_length(name);

  printf("Word Length= %i\n", n);
}

int string_length(string s)
{
  int n = 0;
  while (s[n] != '\0')
  {
    n++;
  }

  return n;
}