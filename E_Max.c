// #include <stdio.h>
// int main()
// {
//   int n,value,max=0;
//   scanf("%d",&n);
//   for (int i = 1; i <= n; i++)
//   {
//     scanf("%d",&value);
//     if(value > max){
//         max = value;
//     }
//   }
//   printf("%d", max);
//   return 0;
// }
#include <stdio.h>
#include <limits.h>
int main()
{
  int n,value,max=INT_MIN, min=INT_MAX;
  scanf("%d",&n);
  for (int i = 1; i <= n; i++)
  {
    scanf("%d",&value);
    if(value > max){
        max = value;
    }
  }
  printf("%d", max);
  return 0;
}