#include <stdio.h>
#include <string.h>
int main()
{
  char arr[100];
  scanf("%s", &arr);
  int count[26] = {0};
  for (int i = 0; i < strlen(arr); i++)
  {
    int value = arr[i] - 'a';
    count[value]++;
    // printf("%d ", count[i]);
  }
  for (int i = 0; i < 26; i++)
  {
    printf("%c - %d\n", i + 97, count[i]);
  }

  //   int len = strlen(arr);
  //   int arr[100] = {0};
  //   printf("%s", arr);

  return 0;
}