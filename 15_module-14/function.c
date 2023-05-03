// #include <stdio.h>
// int sum (int x, int y)
// {
//     int sum = x + y;
//     return sum;
// }
// int main()
// {
//   int s = sum(10, 20);
//   printf("%d", s);
//   return 0;
// }
// #include <stdio.h>
// void sum (int x, int y)
// {
//     int sum = x + y;
//     printf("%d", sum);
// }
// int main()
// {
//   sum(103, 20);
//   return 0;
// }
// #include <stdio.h>
// void sum (void)
// {
//     int sum = 10 + 20;
//     printf("%d", sum);
// }
// int main()
// {
//   sum();
//   return 0;
// }
#include <stdio.h>
int sum (void)
{
    int sum = 20 + 20;
    return sum;
}
int main()
{
  int s = sum();
  printf("%d", s);
  return 0;
}