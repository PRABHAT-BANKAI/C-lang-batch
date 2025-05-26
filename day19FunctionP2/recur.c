#include <stdio.h>





int fact(int num)
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

int main()
{

  printf("factorial  value %d",fact(5));

  return 0;
}