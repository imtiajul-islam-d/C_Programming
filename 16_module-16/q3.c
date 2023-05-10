#include <stdio.h>
int count_before_zero(int *ar, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int val = ("%d", *(ar + i));
        if (val != 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = count_before_zero(arr, n);
    printf("%d\n", result);
    return 0;
}