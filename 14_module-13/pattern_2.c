// #include <stdio.h>
// int main()
// {
//   int n;
//   scanf("%d", &n);
//   int space = n - 1, star = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int e = space; e >= 1; e--)
//     {
//         printf(" ");
//     }
//     space--;
//     for (int s = 1; s <= star; s++)
//     {
//         printf("%c", '*');
//     }
//     star += 2;
//     printf("\n");
//   }

//   return 0;
// }

#include <stdio.h>
int main()
{
    int n1;
    scanf("%d", &n1);
    int space1 = n1 - 1, star1 = 1;
    for (int i = 1; i <= n1; i++)
    {
        for (int e = space1; e >= 1; e--)
        {
            printf(" ");
        }
        space1--;
        for (int s = 1; s <= star1; s++)
        {
            printf("%c", '*');
        }
        star1 += 2;
        printf("\n");
    }
    int n;
    scanf("%d", &n);
    int space = 0, star = (n * 2) - 1;
    for (int i = 0; i < n; i++)
    {
        for (int e = 0; e < space; e++)
        {
            printf(" ");
        }
        space++;
        for (int s = star; s >= 1; s--)
        {
            printf("%c", '*');
        }
        star -= 2;
        printf("\n");
    }

    return 0;
}