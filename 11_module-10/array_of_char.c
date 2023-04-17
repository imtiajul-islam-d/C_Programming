#include <stdio.h>
int main()
{
  char a[6];
  for (int i = 0; i < 6; i++)
  {
    scanf("%c", &a[i]);
    printf("%c\n", a[i]);
  }
  int sz = sizeof(a) / sizeof(char);
  printf("%d", sz);
  return 0;
}