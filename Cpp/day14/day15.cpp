// - Operator Overloading (Overload binary & unary operator)

#include <iostream>

// binary operators //  - + * / %// && //||
// unary operators // ++ -- // i++ // i--

using namespace std;

class A
{
public:
  int x;
  void set(int n1)
  {
    this->x = n1;
  }
  void get()
  {
    cout << "x= " << this->x << endl;
  }

  A operator--(int)
  {
    A temp;
    temp.x = x--;

    return temp;
  }
};

int main()
{

  A o1;
  o1.set(4);
  // unary operator
  o1--; // o1.operator++()
  o1.get();

  return 0;
}