#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n != 1999)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct");
            break;
        }
    }

    return 0;
}