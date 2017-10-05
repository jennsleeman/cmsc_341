
#include <iostream>
using namespace std;

class Base
{
  private:
   int *stuff;
  public:

  Base ( )
  {
    cout << "Inside Base constructor" << endl;
    stuff = new int[10];
    bad();
  } 


  void bad(){
     int *badbadbad = new int[20];
     for (int i=0;i<20;i++){
        badbadbad[i]=i*2;
        }
     
  }
  
  ~Base ( )
  {
    cout << "Inside Base destructor" << endl;
  } 

};

class Derived : public Base
{
  private:
  int *morestuff;

  public:

  Derived  ( )
  {
    cout << "Inside Derived constructor" << endl;
    morestuff = new int[20];
  } 

  ~Derived ( )
  {
    cout << "Inside Derived destructor" << endl;
    delete[] morestuff;
  } 

};

int main( )
{
  Derived x;
  return 0;
}
