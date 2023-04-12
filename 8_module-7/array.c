// #include <stdio.h>
// int main()
// {
//     int array[10];

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &array[i]);
//         printf("%d\n", array[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int arr[] = {3, 4, 55, 5};
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}