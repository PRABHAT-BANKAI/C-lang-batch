// Initialization
// while (Condition)
// {
// // Code to be executed if the condition is true
// // Increment / Decrement
// }
// while loop syntax

// Initialization

#include <stdio.h>

int main()
{

  printf("1\n");
  printf("2\n");
  printf("3\n");
  printf("4\n");
  printf("5\n");

  // Initialization

  int i = 100;

  while (i >= 1)// condtion if condition is true then code will enter in block
  {
    // Code to be executed if the condition is true

    //even number 
    if (i % 2 != 0)
    {

      printf(" odd number is %d\n", i);
    }

    i--; // dec // we need out of loop 
  }
  // iletration   // dry run  means how my code work

  return 0;
}

// 100 > 1