#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
//   scanf("%s", &a);
  gets(a);
//   int count = 0;
//   for(int i = 0; a[i] != '\0'; i++){
//     count ++;
//   }
  int st = strlen(a);
  printf("%d", st);
  return 0;
}