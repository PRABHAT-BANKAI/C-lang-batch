#include <stdio.h>

// this my main function  excute by c language
int main()
{
  // escape sequence characters
  // \n gives new line
  // \t give extra space between words
  printf("hello world\n");
  printf("hello  c language\n");
  printf("This text\nis on two lines.\n");
  printf("Name\tAge\nPrabhat\n");
  // \\ backslash
  // printf("hello world\\n");

  // \b use for remove backspace
  printf("hello from  \bprogramming language\n");

  // \r: Carriage return // repeat
  printf("c language is \rAwesome\n");

  printf("first  \fSecond  \fThird\n");
 
  // vertical tab   // repeat
  printf("first\v");
  printf("second\v");
  printf("third\v\n");

  printf("c language is \0Awesome language in 2025");

  return 0;
}
