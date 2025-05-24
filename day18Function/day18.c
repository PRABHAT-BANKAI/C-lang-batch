#include <stdio.h>

void show1() // void keyword help into create function, pr  kuch return nahi krate
{
  // code of block
  printf("1\n");
}

void show2()
{

  printf("2\n");
}
void show3()
{

  printf("3\n");
}
void show4()
{

  printf("4\n");
}

void add()
{

  printf("%d\n", 5 + 10);
}

void sum(int num1, int num2)// parameters  value kuch bhi name catch kr skte hai 
{

  printf("Sum is %d\n", num1+ num2);
}

void showMyName(char userName){

  printf("%c\n",userName);

}

int main()
{

  // printf("1\n");
  // printf("2\n");
  // printf("3\n");
  // printf("4\n");

  show4();
  show2();
  show3();
  show1(); // call

  // TNRN Take Nothing, Return Nothing

  add();

  // TSRN Take Something, Return Nothing
  sum(34, 66); // call// arguments
  sum(5, 25);  // call
  sum(33, 33); // call


  showMyName('a');

  return 0;
}