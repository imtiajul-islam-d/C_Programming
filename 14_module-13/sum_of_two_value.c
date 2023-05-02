#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] + ar[j] == x)
            {
                printf("found ");
                break;
            }
        }
    }
    printf("%d", x);

    return 0;
}