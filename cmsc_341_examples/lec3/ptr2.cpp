#include <iostream>
using namespace std;


int main() 
{
  int  x;
  int *xPtr;
  int *xPtr2;
  x = 5;
  cout << "x is " << x << endl;
  xPtr = &x; 
  xPtr2 = xPtr;
  *xPtr2 = 10; 
  cout << " What is xPtr " << endl;
  int ch = cin.get(); 
  cout << "xPtr is " << xPtr << endl;
  cout << " What is xPtr2 " << endl;
  ch = std::cin.get(); 
  cout << "xPtr2 is " << xPtr2 << endl;
  cout << " What is x " << endl;
  ch = std::cin.get();
  cout << "x is " << x << endl;
  return 0;
}

