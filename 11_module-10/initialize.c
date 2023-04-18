#include <stdio.h>
int main()
{
  char a[] = "Emtiaz\0";
  int sz = sizeof(a) / sizeof(char);
  printf("%d\n",sz);
  printf("%s", a);
  return 0;
//   char a[7] = "Emtiaz";
//   int sz = sizeof(a) / sizeof(char);
//   printf("%d\n",sz);
//   printf("%s", a);
//   return 0;
}