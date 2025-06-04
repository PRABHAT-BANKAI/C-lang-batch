#include <stdio.h>

int main()
{

  int mynumber = 55;   // store number
  float myfloat = 5.5; // float store 2.5 points value
  char myChar = 'a';   // char store string
  char mystring[] = "awesome";

  int a = 5;
  int b = 6;

  float result = a + myfloat;

  // Format Specifier   it help to formate the data types

  printf("%c\n", myChar); // %c formate with characters

  printf("%d\n", mynumber); // %d formate with numbers
  printf("%f\n", myfloat);// %f formate with character with single alphabet

  printf("a number is %d b number is %d and sum of a+b = %d\n", a, b,a+b);
  printf("%s",mystring); // %s format with string with whole word "hello"
  printf("%f",result);

      return 0;
}