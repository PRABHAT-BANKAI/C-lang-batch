#include <stdio.h>

int main()
{
  int num = 5;

  // for (int i = 1; i <= num; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     printf("%d", j);
  //   }
  //   printf("\n");
  // }

  // for(int i=num;i>0;i--){
  //   printf("%d\n",i);
  // }

  // for (int i = num; i > 0; i--)
  // {

  //   for (int j = num; j >= i; j--)
  //   {
  //     printf("%d", j);
  //   }
  //   printf("\n");
  // }

  // for (int i = 1; i <= num; i++)//1//2//3//4/5//6(false)
  // {

  //   for (int k = num; k > i; k--)//5>5
  //   {
  //     printf("_");
  //   }
  //   for (int j = 1; j <= i; j++)//1//2//3//4//5
  //   {
  //     printf("%d", j);
  //   }
  //   printf("\n");
  // }

  for (int i = 1; i <= 5; i++)
  {
    if(i==1 || i==3){
      printf("*****\n");
    }else{
        printf("*   *\n");
    }
  }

  return 0;
}
//____1
//___12
//__123
//_1234
// 12345
//

//    1
//   12
//  123
// 1234
// 12345

// 5
// 54
// 543
// 5432
// 54321

// 5
// 4
// 3
// 2
// 1

//*****
//*
//***** 
//*
//***** 