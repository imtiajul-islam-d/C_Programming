#include <stdio.h>
#include <string.h>
int main()
{
  char s[1001], t[1001];
//   fgets(s, 1000, stdin);
  scanf("%s %s", &s, &t);

  int sl = strlen(s), tl = strlen(t);
  
  printf("%d %d\n%s %s", sl, tl, s, t);
  
  return 0;
}