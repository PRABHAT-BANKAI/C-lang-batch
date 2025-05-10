#include <stdio.h>

int main()
{
  int number;

  printf("enter your number for week day  ");
  scanf("%d", &number);

  //   if (number == 1)
  //   {
  //     printf("Monday");
  //   }
  //   else if (number == 2)
  //   {
  //     printf("Tuesday");
  //   }
  //   else if (number == 3)
  //   {
  //     printf("W");
  //   }
  //   else if (number == 4)
  //   {
  //     printf("Thurs");
  //   }
  //   else if (number == 5)
  //   {
  //     printf("F");
  //   }
  //   else if (number == 6)
  //   {
  //     printf("Sat");
  //   }
  //   else if (number == 7)
  //   {
  //     printf("sunday");
  //   }
  //   else
  //   {
  //     printf("invalid number for weeks day");
  //   }

  switch (number)
  {
  case 1:
    printf("Monday");
    break; // it will stop the code
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("W");
    break;
  case 4:
    printf("Thurs");
    break;
  case 5:
    printf("F");
    break;
  default:
    printf("invalid number for weeks day");
  }

  return 0;
}