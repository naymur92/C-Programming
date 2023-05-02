#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
  string name = get_string("Name: ");
  
  printf("Printing characters: \n");
  for(int i = 0; i < strlen(name); i++)
  {
    printf("%c\n", name[i]);
  }
}