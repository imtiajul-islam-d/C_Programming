#include <stdio.h>
#include <string.h>
int main()
{
  char A[100], B[100];
  scanf("%s %s", &A, &B);
  int v = strcmp(A, B);
  if(v > 0){
    printf("%s", B);
  }else if (v < 0)
  {
    printf("%s", A);
  }else{
    printf("%s", B);
  }
  return 0;
}