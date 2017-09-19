#include <iostream>
using namespace std;


int main() 
{
  int  x;
  int *xPtr;
  x = 5;
  cout << "x is " << x << endl;
  xPtr = &x;  /* xPtr points to x */
  *xPtr = 6;  /* x’s value is 6 now */
  cout << " What is xPtr " << endl;
  int ch = cin.get(); 
  cout << "xPtr is " << xPtr << endl;
  cout << " What is &xPtr " << endl;
  ch = std::cin.get(); 
  cout << "&xPtr is " << &xPtr << endl;
  cout << " What is *Ptr " << endl;
  ch = std::cin.get();
  cout << "*xPtr is " << *xPtr << endl;
  return 0;
}

