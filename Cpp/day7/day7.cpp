#include <iostream>
#include <string.h>
using namespace std;

// copy constructor

class Points
{
public:
  int p1, p2;

  Points(int n1, int n2)
  {
    this->p1 = n1;
    this->p2 = n2;

    cout << this->p1 << " " << this->p2 << endl;
  }

  Points(&n)// copy constructor 
  {
    this->p1 = n.p1;
    this->p2 = n.p2;

    cout << this->p1 << " " << this->p2 << endl;
  };
};

int main()
{
  Points j1(4, 30);
  Points j2(33, 1);
  // Points j3(4, 30);

  Points j4(j1); // copy constructor

  Points j5 = j2;// copy constrcutor

  return 0;
}