// #include <stdio.h>
// int main()
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
// #include <stdio.h>
// int main()
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
// #include <stdio.h>
// int main()
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
// #include <stdio.h>
// int main()
// {
//     int X;
//     scanf("%d", &X);
//     int res = X / 1000;
//     if (res % 2 == 0)
//     {
//         printf("EVEN");
//     }
//     else
//     {
//         printf("ODD");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//   char X;
//   scanf("%c", &X);
//   if(X >= '0' && X <= '9')
//   {
//     printf("IS DIGIT");
//   }else{
//     printf("ALPHA\n");
//     if(X >= 'a' && X <= 'z'){
//         printf("IS SMALL");
//     }else{
//         printf("IS CAPITAL");
//     }
//   }
//   return 0;
// }

#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A <= B && A <= C)
    {
        printf("%d ", A);
    }
    else if (B <= A && B <= C)
    {
        printf("%d ", B);
    }
    else
    {
        printf("%d ", C);
    }


    if (A >= B && A >= C)
    {
        printf("%d", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d", B);
    }
    else
    {
        printf("%d", C);
    }
    return 0;
}