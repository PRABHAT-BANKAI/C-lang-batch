#include <stdio.h>

int main()
{
  const int a = 15; // const keyword makes vairable constant  i cannot update again this variable
  int b = 20;

#define c 15;

  // b = 15;

  int sum = c + a;

  printf("%d\n", sum);

  // a = 20;
  printf("%10d\n", a);
  printf("%3.5d\n", a);

  const int NUM = 123;

  float number = 75;

  printf("%12f\n", number);
  printf("%0.3f\n",number);
  printf("%10.3f\n",number);

  int input ;
  printf("Enter Your number\n");
  scanf(" %d",&input);

  return 0;
}