#include <iostream>
using namespace std;

//- Virtual function (virtual keyword always create in parent class)

//- Abstract class (Pure virtual function)
class A
{
public:
  virtual void show()
  {
    cout << "method from A" << endl;
  }
};

class B : public A
{
public:
  void show()
  {
    cout << "method from B" << endl;
  }
};

int main()
{
  // B o1; // object
  // o1.show();

  // B *p1; // pointer object

  // p1->show();

  A *p1;
  A a1;
  B b1;

  p1 = &a1;

  p1->show(); // pointer object
  return 0;
}
