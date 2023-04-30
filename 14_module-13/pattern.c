// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int e = 1; e <= i; e++)
//         {
//             printf("%c", '*');
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int e = i; e >= 1; e--)
        {
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}