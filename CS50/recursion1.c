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
  // if nothing to draw
  if (n == 0)
  {
    return;
  }

  // draw pyramid of height n - 1
  draw(n - 1);

  // draw last row of pyramid
  for (int i = 0; i < n; i++)
  {
    printf("#");
  }
  printf("\n");
}