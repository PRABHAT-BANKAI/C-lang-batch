#include <stdio.h>

int main()
{

  for (int i = 1; i <= 5; i++)//1 //2//row 
  {
    for (int j = 1; j <= i; j++)//1  //12  // column 
    {
      // printf("%d", j);//1
      printf("*");
    }

    printf("\n");//
  }

  return 0;
}
//1
//12
//123
//1234
//12345