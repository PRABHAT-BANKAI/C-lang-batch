#include <iostream>
#include <string.h>

using namespace std;

// array of object
//  friend function

class Student
{

private:
  int id;
  char name[100];
  int age;

public:
  void setData()
  {
    cout << "Enter id: ";
    cin >> this->id;
    cout << "Enter name: ";
    cin >> this->name;
    cout << "Enter age: ";
    cin >> this->age;
  }

  void getData()
  {
    cout << "ID:" << this->id;
    cout << "Name:" << this->name;
    cout << "Age:" << this->age;
  }
};

int main()
{
  // array of object
  Student s[10];

  // s[0].setData();
  // s[1].setData();

  // s[0].getData();
  // s[1].getData();

  for (int i = 0; i <= 5; i++)
  {

    s[i].setData();
  }

  for (int i = 0; i <= 5; i++)
  {

    s[i].getData();
  }

  return 0;
}