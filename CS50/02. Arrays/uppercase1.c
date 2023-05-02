#include <stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
  string s = get_string("Name: ");

  printf("Converting to uppercase...\n");

  for (int i = 0, n = strlen(s); i < n; i++)
  {
    /* code */
    if(islower(s[i])){
      printf("%c", toupper(s[i]));
    } else{
      printf("%c", s[i]);
    }
  }
  printf("\n");
}