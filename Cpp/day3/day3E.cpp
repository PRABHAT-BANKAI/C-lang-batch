#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
private:
  char name[50];
  int power;

public:
  int setter(int pow)
  {
    // strcpy(this->name, userName); //{name:"batman"}
    this->power = pow;
  }

  void getter() // methods
  {

    cout << name << "power:" << power;
  }
};

int main()
{

  Employee e1, e2;

  e1.setter(400);

  e2.setter(700);
  e2.getter();
  e1.getter();

  return 0;
}