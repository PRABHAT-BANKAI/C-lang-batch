#include <stdio.h>





int fact(int num)// 5 //4//3//2//1//0
{

  if (num == 0)
  {
    return 1;
  }
  else
  {

    return num * fact(num - 1); // recursion  function 
  }
}
// 5 * 4* 3* 2* 1* 1//120
// 
// 
// 
// 

int main()
{

  printf("factorial  value %d",fact(5));

  return 0;
}