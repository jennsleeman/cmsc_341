#include <iostream>
#include "Recursion.h"
using namespace std;


int main() {
    Creator* creator = new Creator();
    creator->addChild("A");
    creator->addChild("B");
    creator->addChild("C");
    creator->addChild("D");
    creator->print();
    delete creator;
    return 0;
}
