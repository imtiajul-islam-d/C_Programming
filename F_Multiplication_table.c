#include <stdio.h>
int main()
{
    int n, limit = 12;
    scanf("%d", &n);
    for (int i = 1; i <= limit; i++)
    {
        int result = i * n;
        printf("%d * %d = %d\n", n , i, result);
    }

    return 0;
}