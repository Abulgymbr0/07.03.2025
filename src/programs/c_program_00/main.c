#include <stdio.h>
#include <inttypes.h>

int main()
{
  int32_t arr[5];
  printf("Hi lets sort numbers!\n");

  for (int32_t i = 0; i < 5; i++)
  {
    printf("Please enter a for number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int32_t i = 0; i < 5; i++)
  {
    printf("%d\n", arr[i]);
  }

  printf("Here are the sorted numbers:\n");
  for (int32_t i = 0; i < 5; i++)
  {
    for (int32_t i2 = 0; i2 < 5-1; i2++)
    {
      if (arr[i2] > arr[i2 + 1])
      {
        int32_t tmp = arr[i2];
        arr[i2] = arr[i2 + 1];
        arr[i2 + 1] = tmp;
      }
    }
  }

  for (int32_t i = 0; i < 5; i++)
  {
    printf("%d\n", arr[i]);
  }
}