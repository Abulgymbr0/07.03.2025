#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <test_c_lib.h>
#include <time.h>

#define ARR_SIZE 6

int main(int argc, char **argv)
{
  srand(time(0));
  int32_t random_array[ARR_SIZE];
  int32_t user_array[ARR_SIZE];

  printf("Hello and welcome to Abul's Lottery.\n");

  for (int32_t i = 0; i < 6; i++)
  {
    printf("Please enter a for number %d: ", i + 1);
    scanf("%d", &user_array[i]);
  }

  for (int32_t i = 0; i < 6; i++)
  {
    for (int32_t j = 0; j < 6 - 1; j++)
    {
      if (user_array[j] > user_array[j + 1])
      {
        int32_t tmp = user_array[j];
        user_array[j] = user_array[j + 1];
        user_array[j + 1] = tmp;
      }
    }
  }
  printf("You're Numbers are... ");
  for (int32_t i = 0; i < 6; i++)
  {
    printf("%d, ", user_array[i]);
  }
  printf("\n");

  for (int32_t i = 0; i < ARR_SIZE; i++)
  {
    random_array[i] = rand() % 45;
  }

  for (int32_t i = 0; i < ARR_SIZE; i++)
  {
    for (int32_t j = 0; j < ARR_SIZE - 1; j++)
    {
      if (random_array[j] > random_array[j + 1])
      {
        int32_t temp = 0;
        temp = random_array[j];
        random_array[j] = random_array[j + 1];
        random_array[j + 1] = temp;
      }
    }
  }

  printf("The Lottery Numbers are... ");
  for (int32_t i = 0; i < ARR_SIZE; i++)
  {
    printf("%d, ", random_array[i]);
  }
  printf("\n");
  int count = 0;
  for (int32_t i = 0; i < ARR_SIZE; i++)
  {
    if (user_array[i] == random_array[i])
    {
      count++;
    }
  }
  printf("You got %d numbers right.\n", count);
  return 0;
}
