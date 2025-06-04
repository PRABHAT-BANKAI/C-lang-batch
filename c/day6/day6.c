#include <stdio.h>

int main()
{
  // printf("one\n");
  // printf("two");  > < >= <=  == !=

  int marks = 80;

  // if(conditon){

  // }// block

  // if(80 < 60){// conditon false
  //   printf("80 is greater than 60 ");// execute
  // }

  // if(80 > 60){// false
  //   printf("80 is greater than 60 ");// execute
  // }else{
  //    printf("80 never smaller than 60");
  // }

  // ladder statement

  //   char light = 'p';

  //   if (light == 'r')
  //   {
  //     printf("stop");
  //   }
  //   else if (light == 'o')
  //   {
  //     printf("slow down ");
  //   }
  //   else if (light == 'g')
  //   {
  //     printf("go");
  //   }
  //   else
  //   {
  //     printf("invalid color");
  //   }

  // }
  // top se bottom

  // int budget = 2000;

  // if (budget > 4000)
  // {
  //   printf("5 star restuarant ");
  // }
  // else if (budget >= 3000)
  // {
  //   printf("burger king");
  // }
  // else if (budget >= 2000)
  // {
  //   printf("dominoz"); // execute
  // }
  // else if (budget >= 2000)
  // {
  //   printf("dhaba or street food");
  // }
  // else
  // {
  //   printf("ghar betho ");
  // }

  // nested if else

  int a, b, c;

  a = 14;
  b = 85;
  c = 30;

  if (a > b)
  {
    if (a > c)
    {
      printf("a is maximum");
    }
    else
    {
      printf("c is maximum");
    }
  }
  else
  {
    if (b > c)
    {
      printf("b is maximum");
    }
    else
    {
      printf("c is maximum");
    }
  }

  return 0;
}
