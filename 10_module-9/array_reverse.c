#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int st = 0, end = n -1;
  while (st < end)
  {
    int temp = arr[st];
    arr[st] = arr[end];
    arr[end] = temp;
    st ++;
    end --;
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}