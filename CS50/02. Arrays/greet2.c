#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
  printf("Number of arguments= %i\n", argc);

  if (argc == 2)
  {
    printf("Hello, %s\n", argv[1]);
  }
  else
  {
    printf("Hello, world\n");
  }
}