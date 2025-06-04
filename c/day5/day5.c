#include <stdio.h>

int main()
{
  // unary operators  -- , ++

  int a = 5;
  float c = 12.5;

  // a = a+1; if i need single increment  so can use unary operator
  // a++;

  a++;
  //  1byte 1024kb  1024mb   1gb    1024gb 1tb
  printf("%d\n", a);          // value of a
  printf("%lu", sizeof(a));   // size  of int 4 bytes
  printf("%lu\n", sizeof(c)); // size 44 bytes

  // condition operators   <,>,<=,>=,==,!=,   !this symbol for consider "not" // 5 != 8//true

  // int b = 12>13  // true // false

  float calculate = 12 - 5 * (2 + 3) / 2 + 100;
  // operator precedence
  // left to right
  //()
  //  * /
  // / *
  // + -
  // - +
  // a = a+5
  a += 5;

  printf("%f\n", calculate);

  int value = 45;

  printf("%d\n", value);// normally int output
  // typeof int  convert to float
  // conversion int change into float
  printf("%f", (float)value);// output in float type change into float

  // a= 5
  // b = 6
  // a =6
// b = 5

  return 0;
}