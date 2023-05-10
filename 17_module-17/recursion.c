// #include <stdio.h>
// void num(int i)
// {
//     if (i == 6)
//         return;
//     printf("%d\n", i);
//     num(i + 1);
// }
// int main()
// {
//     printf("Printing\n");
//     num(1);
//     return 0;
// }
// #include <stdio.h>
// void num(int i)
// {
//     if (i == 0)
//         return;
//     printf("%d\n", i);
//     num(i - 1);
// }
// int main()
// {
//     printf("Printing\n");
//     num(5);
//     return 0;
// }
// #include <stdio.h>
// void num(int arr[], int n, int i)
// {
//     if (i == n)
//         return;
//     printf("%d\n", arr[i]);
//     num(arr, n, i + 1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &arr[i]);
//         // printf("%d ", arr[i]);
//     }
//     num(arr, n, 0);
//     return 0;
// }

#include <stdio.h>
void num(int i, char parameter)
{
    if (i == 6)
        return;
    if (parameter == 'r')
    {
        num(i + 1, parameter);
        printf("%d\n", i);
    }
    if (parameter == 'n')
    {
        printf("%d\n", i);
        num(i + 1, parameter);
    }
}
int main()
{
    // printf("Printing\n");
    num(1, 'n');
    return 0;
}