#include <iostream>
#include <string.h>

using namespace std;

// constrcutor
//  Name must be same as class name
//  constructor never have any return datatype
//  constructor never return anything

class City
{
public:
  int id;
  char name[100];

  // paramaterised constructor
  City(int i) // constructor
  {
    this->id = i;
    // strcpy(this->name, n);

    // cout << "welcome to city" << endl;

    cout << this->id << " " << endl;
  }

  City()
  {
    cout << "default Constructor" << endl;
  }
};

int main()
{

  // City c1; // class is instantiated

  // City c1;
  // City c2;

  // City c[10]; // it means contructor function call 10 times

  City c1(1);
  City c2(2);
  City c3(3);
  City c4(4);

  City c5(5);
  City c6;
  return 0;
}