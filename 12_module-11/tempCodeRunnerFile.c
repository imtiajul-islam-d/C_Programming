#include <stdio.h>
#include <string.h>
int main()
{
  char arr[100];
  scanf("%s", &arr);
  for (int i = 0; i < strlen(arr); i++)
  {
    int value = arr[i] - 97;
    printf("%d ", value);
  }
  
//   int len = strlen(arr);
//   int arr[100] = {0};
//   printf("%s", arr);

  return 0;
}