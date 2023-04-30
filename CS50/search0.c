// implementing linear search algorithm for integers
#include <stdio.h>
#include <cs50.h>

int main(void)
{
  // an array of integers
  int numbers[] = {45, 85, 96, 35, 744, 2148, 54};

  // search for number
  for (int i = 0; i < 7; i++)
  {
    if (numbers[i] == 85)
    {
      printf("Number found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}