#include <stdio.h>

int main()
{

  int num = 10;

  for (int i = 1; i <= num; i++)
  {
 
    if (i % 2 == 0) // false//false//false//false/true
    {
      // break;// it will take break and come out from the loop

      // continue; // skip that one part which come in in ileration is skip

      break;
    }

   printf("%d\n", i);
  }

  return 0;
}