#include <stdio.h>
void no_return_no_params()
{
    float division = 4 / 2;
    printf("%f", division);
}
int main()
{
  no_return_no_params();
  return 0;
}
