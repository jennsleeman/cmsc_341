#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

int main()
{
   int i, myArray[ARRAY_SIZE] = {20,30,40,50,60};
   for (i = 0; i < ARRAY_SIZE ; i++) {
      cout << "myArray at " << i << " is " << myArray[i] << endl;
   }
   cout << endl;
   for (i = 0; i < ARRAY_SIZE ; i++) {
      cout << "myArray at index " << i << " is located at " 
	   << &(myArray[i]) << endl;
   }
   cout << endl;
   cout << "The value of the variable myArray is " << *(myArray) << endl;
   cout << "The address of the variable myArray is " << &(myArray) << endl;

   return 0;
}
