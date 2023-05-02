#include <stdio.h>

int main(void)
{
  char *s = "Naymur";
  // int p = *s;
  // printing the original value of s which store a pointer location
  printf("%p\n", s);

  // printing other pointer locations of string
  printf("%p\n", &s[0]);
  printf("%p\n", &s[1]);
  printf("%p\n", &s[2]);
  printf("%p\n", &s[3]);
  printf("%p\n", &s[4]);
}