#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

int main()
{
   int i, myArray[ARRAY_SIZE]={1,2,3,4,5};
   for (i = 0; i < ARRAY_SIZE+10 ; i++) {
      cout << "myArray at " << i << " is " << myArray[i] << endl;
   }
   return 0;
}
