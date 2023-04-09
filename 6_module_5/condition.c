#include <stdio.h>
int main()
// {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if(A >= B){
//         printf("Yes");
//     }else{
//         printf("No");
//     }
//     return 0;
// }
// {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if(A % B == 0 || B % A == 0){
//         printf("Multiples");
//     }else{
//         printf("No Multiples");
//     }
//     return 0;
// }
// {
//     char X;
//     scanf("%c", &X);
//     if(X > 64 && X < 91){
//         char result = tolower(X);
//         printf("%c", result);
//     }else{
//         char result = toupper(X);
//         printf("%c", result);
//     }
//     return 0;
// }
{
    int X;
    scanf("%d", &X);
    if (X % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}