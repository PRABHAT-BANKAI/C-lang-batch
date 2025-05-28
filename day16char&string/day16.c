#include <stdio.h>

int main()
{

  int number;
  number = 5;

  int arr[] = {
      1,
      2,
      3,
      54,
  };

  // char a ='A';

  // char letter = 'a';

  // printf("%c\n",a);
  // printf("%d\n",a);// it will give me output integer// ASCII value
  // printf("%d",letter);
  // // printf("%s",a);

  char word[] = {
      'a',
      'r',
      'e',
      'h',
      'e',
      'l',
      'l',

  }; // in the last of string i have NULL (empty space)

  for (int i = 0; word[i]!= '\0'; i++)//NULL == '\0'
  {
    printf("%d\n", word[i]); // ascii value
    printf("%c\n", word[i]); // character
  }

  char name[] = "Prabhat";

  for (int j = 0; j <= 7; j++)
  {
    printf("%d\n", name[j]);
  }

  return 0;
}