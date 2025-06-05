#include <iostream>
#include <string.h>

using namespace std;
class Employee
{
public:
  int id;
  char name[50];
  int salary;
};

int main()
{

  Employee e1, e2;

  e1.id = 1;
  strcpy(e1.name, "Rahul");
  e1.salary = 2000;

  cout << e1.id << e1.name << e1.salary;

  return 0;
}