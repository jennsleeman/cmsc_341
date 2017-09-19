#include <iostream>
using namespace std;

class Rectangle {
  int width, height;
public:
  Rectangle() : width(1), height(1) 
  {
     cout << "Constructor called \n";
  }
  Rectangle(int x, int y) : width(x), height(y) {}
  int area(void) { return width * height; }
  ~Rectangle() 
  {
     cout << "Deconstructor called \n";
  }
};


void run() 
{
  Rectangle *foo;
  foo = new Rectangle[2];
  cout << "*foo's area: " << foo[0].area() << '\n';
  cout << "*foo's area: " << foo[1].area() << '\n';
}
int main() 
{
  run();
  return 0;
}
