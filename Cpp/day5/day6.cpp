#include <iostream>
#include <string.h>

using namespace std;

//  friend function

class Prabhat
{
private:
  int money = 100;
  int number_of_props = 5;
  friend void karan();
};

void karan()
{
  Prabhat a1;
  cout << a1.money;
}

int main()
{

  karan();

      return 0;
}