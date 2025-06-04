#include <stdio.h>

void prabhat()
{

  printf("%s\n", "prabhat");
}

void hetvi()
{

  printf("%s\n", "hetvi");

  prabhat();
}

void parth()
{

  printf("%s\n", "parth");

  hetvi();
  hetvi();
  hetvi();
}

int main()
{

  parth();
  parth();

  return 0;
}

// parth
// hetvi
// hetvi
// hetvi
// parth
// hetvi
// hetvi
// hetvi
