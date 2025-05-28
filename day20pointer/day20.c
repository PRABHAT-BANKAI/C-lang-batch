#include <stdio.h>

int main()
{

  // int num1 = 9;

  // float num2 = 5.55555;

  // char str = 'A';

  // printf("Size in bytes: %zu\n", sizeof(num1));
  // printf("Size in bytes: %zu\n", sizeof(num2));
  // printf("Size in bytes: %d\n", sizeof(str));

  int *p;
  int *p2;
  int *p3;

  int num = 55;
  int num2 = 99;
  int num3 = 39;

  p = &num;

  p2 = &num2;
  p3 = &num3;

  printf("Address is: %u\n", p + 1); // scale of pointer
  printf("Address is: %u\n", p2 + 1);
  printf("Address is: %u\n", p3);

  int *ptr;

  int arr[5] = {1, 22, 44, 4, 5};

  ptr = &arr[0];

  for (int i = 0; i < 5; i++)
  {

    printf("%u => %d\n", ptr + i, *(ptr + i));
  }

  return 0;
}