#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int position = -1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int num;
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == num)
        {
            position = i;
            break;
        }
    }
    printf("%d", position);
    return 0;
}