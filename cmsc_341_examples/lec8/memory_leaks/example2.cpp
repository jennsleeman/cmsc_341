#include <iostream>
using namespace std;


void memory_leak( )
{
  string *names = new string[50];

  string *name = new string;

  delete name; 

  delete names;
  // have to use "[ ]" or loop through and delete individually, 
  //since names points to an array of strings:
  //delete[ ] names;

}
//static vs. not
class Foos
{
  private:
  int *ids;
  static int name;
  public:
  Foos(){
     ids = new int[5000];
  }
};


int main()
{
 memory_leak();
 Foos foo;
 return 0;
}



