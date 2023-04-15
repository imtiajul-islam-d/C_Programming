#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > 0)
        {
            printf("%d ", 1);
        }
        else if (array[i] < 0)
        {
            printf("%d ", 2);
        }
        else
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}