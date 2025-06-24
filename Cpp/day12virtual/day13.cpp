#include <iostream>
using namespace std;

//- Virtual function (virtual keyword always create in parent class)

//- Abstract class (Pure virtual function)

class old
{
public:
  virtual void movePhone() = 0; // class never be intiantiated
  void smartPhone()
  {

    cout << "apple" << endl;
  }
};

class modern : public old
{
public:
  void movePhone()
  {
    cout << "My phone is moving" << endl;
  }
};

int main()
{
  modern o1;

  o1.movePhone();
  o1.smartPhone();

  return 0;
}
