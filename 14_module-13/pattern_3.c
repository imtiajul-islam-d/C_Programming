#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            printf("d");
        }
        number++;
        printf("\n");
    }
    return 0;
}