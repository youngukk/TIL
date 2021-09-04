#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  if (*(int *)a > *(int *)b)
    return 1;
  else if (*(int *)a < *(int *)b)
    return -1;
  else
    return 0;
}

int main()
{
  int T = 0;
  scanf("%d", &T);

  // int* number;
  // number = (int*)malloc(sizeof(int) * T);

  int arr[1000] = {0};
  for (int i = 0; i < T; i++)
    scanf("%d", arr[i++]);

  qsort(arr, T, sizeof(int), compare);

  for (int i = 0; i < T; i++)
    print("%d\n", arr[i]);

  return 0;
}