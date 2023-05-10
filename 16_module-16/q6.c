#include <stdio.h>
void passed_by_reference(int * a, int size)
{
    // location of "a" in memory is = 0061FF14
    printf("%p\n", a);
}
int main()
{
    int a[3] = {3, 4, 5};
    // location of "a" in memory is = 0061FF14
    passed_by_reference(a, 3);
    printf("%p\n", &a);
    return 0;
}