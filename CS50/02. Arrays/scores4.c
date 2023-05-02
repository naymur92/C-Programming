#include <stdio.h>
#include <cs50.h>
#include <string.h>

const int N = 3;

// prototype
int get_positive_int(void);
int sum_array(int array[]);

int main(void)
{
  int scores[N];
  for(int i = 0; i < 3; i++)
  {
    printf("Score %i:\n", (i + 1));
    scores[i] = get_positive_int();
  }

  float avg = sum_array(scores) / (float) N;

  printf("Average: %f\n", avg);
}

// get positive integer less than 100
int get_positive_int(void)
{
  int n;
  do
  {
    n = get_int("= ");
  }
  while(n < 0 || n > 100);

  return n;
}

// sum array
int sum_array(int array[])
{
  int sum = 0;
  for(int i = 0; i < N; i ++)
  {
    sum += array[i];
  }

  return sum;
}
