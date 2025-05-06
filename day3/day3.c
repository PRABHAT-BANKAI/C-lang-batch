#include <stdio.h>

// macro // #define  /// create always globally level

#define PI 3.14 // constant

int main()
{

  const int ALPA = 25; /// const keyword make a variable constant  you cannot update variable with another number
  int a = 15;
  printf("%d\n", ALPA);
  printf("%10.2f\n", PI);

  printf(" this virable is%6.5d", a);

      return 0;
}