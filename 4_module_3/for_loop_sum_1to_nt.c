#include <stdio.h>
int main()
{
    int i = 0;
    int sum = 0;
    for (i = 1; i <= 10; i = i + 1)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}