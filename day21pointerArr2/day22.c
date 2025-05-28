#include <stdio.h>
int sum(int *p, int *q)
{
  printf("%d , %d\n", p, q);//address 6422300 , 6422296

  return *p + *q;// 5 + 2
}
int main()
{

  int a = 5, b = 2;
  printf("%d", sum(&a, &b));

  return 0;
}