#include <stdio.h>
void num(int i)
{
    if (i == 6)
        return;
    printf("%d\n", i);
    num(i + 1);
}
int main()
{
    printf("Printing\n");
    num(1);
    return 0;
}