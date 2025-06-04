#include <stdio.h>

int main (){

  char ch = 'A';           // ek character
  int num = -10;           // signed integer
  unsigned int unum = 20;  // unsigned integer // positive value store kr skte 
  float f = 3.14;          // float value
  double d = 3.1415926535; // double value
  long int l = 100000L;    // long int
  long long int ll = 10000000000LL; // long long
  char str[] = "Hello";    // string

  printf("Character: %c\n", ch);         // %c se character print
  printf("Signed Integer: %d\n", num);  // %d ya %i se integer
  printf("Unsigned Integer: %u\n", unum); // %u se sirf positive
  printf("Float: %f\n", f);             // %f se float
  printf("Double: %lf\n", d);           // %lf se double
  printf("Long Int: %ld\n", l);         // %ld se long int
  printf("Long Long: %lld\n", ll);      // %lld se long long
  printf("String: %s\n", str);          // %s se string
  printf("Hexadecimal: %x\n", num);     // %x se hexadecimal
  printf("Octal: %o\n", num);           // %o se octal
  printf("Percentage: %%\n");           // %% se % print hota hai

  return 0;
}