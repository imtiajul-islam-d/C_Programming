#include <stdio.h>
int main()
{
  int x;
  scanf("%d", &x);
  printf("%p\n", &x);
  int * add = &x;
  printf("%p\n", add);
  printf("%p\n", &add);
  printf("%d\n", *add);
  *add = 500;
  printf("%d\n", x);
  return 0;
}