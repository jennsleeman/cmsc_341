#include <iostream>
using namespace std;

void memory_leak( )
{
  // “*var” pointer is never deleted
  int *var = new int;
  *var = 25;
}


int main()
{
 memory_leak( );
 return 0;
}
