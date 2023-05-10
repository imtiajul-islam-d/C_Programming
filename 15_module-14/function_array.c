// #include <stdio.h>
// void fun(int * ar,int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", ar[i]);
//     }

// }
// int main()
// {
//   int ar[3] = {2, 3 ,4};
//   fun(ar, 3);
//   int sz = sizeof(ar) / sizeof(int);
// //   printf("%d", sz) ;
//   return 0;
// }
#include <stdio.h>
#include <string.h>
char fun(char * ar)
{
    // ar[0] = 'f';
    // printf("%s\n", *ar);
    // return ar;
     printf("%s\n", ar);
}
int main()
{
    char ar[20] = "string";
    fun(ar);
    printf("%s\n", ar);
    // for (int i = 0; i < strlen(res); i++)
    // {
    //     printf("%c", res[i]);
    // }
    
    // printf("%d",  res[i]);
    return 0;
}