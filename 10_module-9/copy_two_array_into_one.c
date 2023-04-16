#include <stdio.h>
int main()
{
    int n;
    int x;
    scanf("%d %d", &n, &x);
    int arr1[n];
    int arr2[x];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[n + x];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = n; i < n + x; i++)
    {
        arr3[i] = arr2[i - n];
    }
    for (int i = 0; i < n + x; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}