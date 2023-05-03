#include <stdio.h>
#include <math.h>
int main()
{
  double x;
  scanf("%lf", &x);
//   int val = ceil(x);
//   int val = floor(x);
//   int val = round(x);
//   int val = sqrt(x);
  int val = pow(x, 2);
  printf("%d", val);
  return 0;
}