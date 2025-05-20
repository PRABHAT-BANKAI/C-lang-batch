#include <stdio.h>

int main()
{

  // int record[2][3] = {{1, 2, 3},
  //                     {4, 5, 6}};

  // printf("%d", record[0][1]);

  int record[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; // insert

  // record[0][0] = 6;
  // record[0][1] = 9;
  // record[0][2] = 4;
  // record[1][0] = 5;
  // record[1][1] = 8;
  // record[1][2] = 3;
  // record[2][0] = 7;
  // record[2][1] = 4;
  // record[2][2] = 2;

  // 694
  // 583
  // 742

  // for (int i = 0; i < 3; i++)
  // { // rows
  //   for (int j = 0; j < 3; j++)
  //   { // column
  //     printf("%d", record[i][j]);
  //   }
  //   printf("\n");
  // }

  for (int i = 0; i < 3; i++)
  { // rows
    for (int j = 0; j < 3; j++)
    { // column
      printf("Enter your number");
      scanf("%d", &record[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  { // rows
    for (int j = 0; j < 3; j++)
    { // column
      printf("%d", record[i][j]);
    }
    printf("\n");
  }

  return 0;
}

// 123
// 456



