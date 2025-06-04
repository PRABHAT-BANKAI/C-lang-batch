#include <stdio.h>

int square() // return something
{
  int a = 5;

  return a * a;
}

int evenfun(int num)// return something
{

  if (num % 2 == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

int main()
{

  // printf("%d\n", evenfun(100));

int result = evenfun(11);// take something

if(result == 0){
  printf("%s\n","even");
}else{
   printf("%s\n","odd");
}

  printf("%d\n", square()); // take nothing
  return 0;
}