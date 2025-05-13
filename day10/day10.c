#include <stdio.h>

int main()
{

  //   Initialization
  // do
  // {
  // // Code to be executed
  // // Increment / Decrement
  // } while (Condition);

  //   int i = 1;

  //   do
  //   {
  //     i++; //2//3//4//5
  //     printf("%d\n", i);//2//3//4//5

  //   } while (i < 5); //2<5//3<5//4<5//5<5//break // ileterate with dry run

  //   return 0;

  // for (initialization; condition; increment/decrement)
  // {
  // // code to be executed is the given condition is true
  // }

  // dry run //1<=20

  // for (int i = 1; i <= 20; i++)
  // {

  //   printf("%d\n", i);
  // }

  // 5
  // 10
  // 15
  // 20
  // 25
  // 30
  // 35
  // 40
  // 45
  // 50

  int number = 5;

  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", i * 5);
  }

  // factorial  5! 5*4*3*2*1  = 120
  int mul =1;
  for (int i = 5; i >= 1; i--)
  {
   mul *= i;
  }

  printf("5 number foctorial is %d",mul);
  return 0;
}
