// Example:
// class Car {
//   public:
//     string brand;
//     void start() {
//       cout << "Car is starting...";
//     }
// };

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Student
{
public:
  int id;
  char name[100];


  private:
  char name2[100] = "stringnumber\n";

  public:
  void show()
  { // method
    cout << name2;
  };
};

int main()
{

  Student student1, student3; // object
  Student student2;

  student2.id = 123;
  student1.id = 12;
  strcpy(student1.name, "batman");
  strcpy(student2.name, "superman");

  student1.show();

  cout << student1.id << student1.name << endl;
  cout << student2.id << student2.name;

  return 0;
}
