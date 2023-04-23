// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[100], b[100];
//     gets(a);
//     gets(b);
//     if (strlen(a) > strlen(b))
//     {
//         printf("a is bigger");
//     }
//     else if (strlen(a) < strlen(b))
//     {
//         printf("b is bigger");
//     }
//     else if (strlen(a) == strlen(b))
//     {
//         // printf("%d", strlen(b));
//         int base = strlen(a);
//         int count = 0;
//         for (int i = 0; i < strlen(a); i++)
//         {
//             if (a[i] == b[i])
//             {
//                 count += 1;
//             }
//             else
//             {
//                 if (a[i] > b[i])
//                 {
//                     printf("a is bigger");
//                 }
//                 else
//                 {
//                     printf("b is bigger");
//                 }
//                 break;
//             }
//         }
//         if (base == count)
//         {

//             printf("both are equal");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", &a, &b);
//     for (int i = 0;; i++)
//     {
//         if (a[i] == '\0' && b[i] == '\0')
//         {
//             printf("Same\n");
//             break;
//         }
//         else if (a[i] == '\0')
//         {
//             printf("A is smaller");
//             break;
//         }
//         else if (b[i] == '\0')
//         {
//             printf("B is smaller");
//             break;
//         }
//         if (a[i] < b[i])
//         {
//             printf("a is smaller");
//             break;
//         }
//         else if (a[i] > b[i])
//         {
//             printf("b is smaller");
//             break;
//         }
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
  char a[100], b[100];
  scanf("%s %s", a, b);
  int v = strcmp(a, b);
  if(v > 0){
    printf("b is smaller");
  }else if (v < 0)
  {
    printf("a is smaller");
  }else{
    printf("both are same");
  }
  return 0;
}