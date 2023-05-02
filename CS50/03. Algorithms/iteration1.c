// right angled pyramid

#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
  // get height
  int height = get_int("Height: ");

  // draw pyramid
  draw(height);
}

void draw(int n)
{
  for (int i = 0; i < n; i++)
  {
    // print spaces
    for (int j = 0; j < n - i; j++)
    {
      printf(" ");
    }

    // print hashes
    for (int k = 0; k < i + 1; k++)
    {
      printf("#");
    }
    printf("\n");
  }
}