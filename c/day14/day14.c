#include <stdio.h>

int main()
{

  int store[] = {11, 22, 44, 33, 55, 66, 11, 22, 44, 33, 55, 66};
  //             0 ,  1,  2,  3,  4, 5,6,  7,  8,  9 ,  10,11

  // store[6]=99;// insert
  // store[1]= 88;

  printf("%d\n", store); // garbage value
  printf("%d\n", store[3]);
  printf("%d\n", store[1]);
  printf("%d\n", store[6]);

  for (int i = 0; i < 13; i++)
  {

    printf("%d\n", store[i]);
  }

  return 0;
}

//[34,11,12,5,9]
// 0   1  2 3 4