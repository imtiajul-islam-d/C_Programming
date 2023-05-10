#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int space = N - 1, num = 1;
    for (int i = 1; i <= (2 * N) - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= num; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        if (i <= N - 1)
        {
            space--;
            num += 2;
        }
        else
        {
            space++;
            num -= 2;
        }
    }
}