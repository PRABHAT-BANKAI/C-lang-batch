#include <stdio.h>

int main()
{

  #define PI 3.14

  int a, b, c; // declaration

  float area ;

  int r = 5;

  // arthmatic operators  + - * / //%modolus

  a = 10; // intialization // = assgin operator
  b = 20;
  c = 30;

  printf(" This my sum =  %d", 10 + 10 + 30);

  // "multi of  10 and 20 and 30 is 6000"
  printf("Multi* of numbers %d\n", a * b * c);

  printf("multi of %d and %d and %d is %d\n", a, b, c, a * b * c);

  area = PI*r*r;

  printf("area of circle %f",area);

  // area of circle 

  

  return 0;
}