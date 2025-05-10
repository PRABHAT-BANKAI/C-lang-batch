#include <stdio.h>

int main()
{

  int value;
  printf("Enter 1 for burger\n");
  printf("enter 2 for sandwich\n");
  printf("enter 3 for Pizza\n");

  printf("Enter your number for food ");
  scanf("%d", &value);

  switch (value)
  {
  case 1:
    printf("Your order is 🍔 burger");
    break;
  case 2:
    printf("Your order is 🥪 sandwich");
    break;
  case 3:
    printf("Your order is 🍕 pizza");
    break;

  default:
    printf("Invalid order number");
    break;
  }

  return 0;
}