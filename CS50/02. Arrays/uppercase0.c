#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  string s = get_string("Name: ");

  printf("Converting to uppercase...\n");

  for (int i = 0, count = strlen(s); i < count; i++)
  {
    /* code */
    if(s[i] >= 'a' && s[i] <= 'z'){
      printf("%c", s[i] - 32);
    }
    else
    {
      printf("%c", s[i]);
    }
  }
  printf("\n");
  
}