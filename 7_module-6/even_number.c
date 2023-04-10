#include <stdio.h>
int main()
{
  int N;
  scanf("%d", &N);
  for (int i = 1; i <= N; i++)
  {
    if (i == 1)
    {
      printf("%d\n", i);
    }
    else if (i % 2 == 0)
    {
    }
    else
    {
      printf("%d\n", i);
    }
  }

  return 0;
}