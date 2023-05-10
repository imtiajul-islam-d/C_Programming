#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int space = N - 1, num = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        for (int n = 0; n < num; n++)
        {
            printf("%d", i);
        }
        space--;
        num++;
        printf("\n");
    }

    return 0;
}