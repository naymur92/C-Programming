#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
  // get height of pyramid
  int height = get_int("Height: ");

  // draw pyramid
  draw(height);
}

void draw(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}