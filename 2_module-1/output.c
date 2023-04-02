#include <stdio.h>
int main()
{
    int emi;
    int numayeer;
    int ishat;
    char a;
    float f;
    scanf("%d %d %d %c %f", &emi, &numayeer, &ishat, &a, &f);
    printf("%d %d %d %c %0.1f", emi, numayeer, ishat, a, f);
    // scanf("%c", &a);
    // printf("%c", a);
    return 0;
}