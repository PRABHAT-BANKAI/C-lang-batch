// - Operator Overloading (Overload binary & unary operator)

#include <iostream>

// binary operators //  - + * / %// && //||
// unary operators // ++ -- // i++ // i--

using namespace std;

class Points
{
public:
  int x, y;
  void set(int n1, int n2)
  {
    this->x = n1;
    this->y = n2;
  }
  void get()
  {
    cout << "x = " << this->x << "y= " << this->y << endl;
  }
  Points operator-(Points n)
  {
    Points temp;
    temp.x = this->x - n.x;
    temp.y = this->y - n.y;
    return temp;
  }
};

int main()
{

  // int a = 1;

  // int b = a++; // postfix// 1st assign the value then update the increment // b= 1 // a= 2
  // int c = ++a; // prefix // first increment then assign value // c= 3 a = 3

  // cout << a << endl;//3
  // cout << b << endl;//1
  // cout << c << endl;// 3

  Points p1, p2, p3;

  p1.set(5, 7);
  p1.get();
  p2.set(3, 4);
  p2.get();

// Overload binary
  p3 = p1 - p2; // in code create p1.operator + (p2)
  p3.get();

  return 0;
}