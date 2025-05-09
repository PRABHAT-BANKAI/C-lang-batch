#include <stdio.h>

int main()
{

  int budget = 500;

  // ladder statement // runt top to bottom
  // if (a >= 30)
  // {
  //   printf("a is greater than or equal to 30\n");
  // }
  // else if (a >= 20)
  // {
  //   printf("a is greater than or equal to 20\n");
  // }
  // else if (a >= 10)
  // {
  //   printf("a is greater than or equal to 10\n");
  // }
  // else
  // {
  //   printf("a is smaller than 10");
  // }

  // ternary operator use for condtion  statement

  // (conditon )? true code execute : false code excute

  // (budget > 500) ? printf("i will go science city\n") : printf(" i will go D mart\n");

  (budget > 1000) ? printf("i will go science city\n") : (budget > 800) ? printf("i will go palladium ")
                                                     : (budget >= 500)   ? printf("i will go honest")
                                                                        : printf("Ghar betho kahi nhi jana");

  return 0;
}