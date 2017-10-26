#include "Recursion.h"
#include <iostream>
using namespace std;
Created::Created() {
    parent=NULL;
    child=NULL;
    nodeName="root";
}

Created::Created(string inName) {
    nodeName=inName;
}

void Created::setRoot(Created* inParent)
{
    parent=inParent;
}

void Created::addChild(Created* newChild)
{
   if (child == NULL)
   {
       cout << "Child is null adding: " << newChild->nodeName << endl;
       newChild->setRoot(this);
       child = newChild;
   }
   else
   {
       cout << "Child is not null recursing: " << endl;
       child->addChild(newChild);
   }
}
void Created::print(){
    cout << "========================" << endl;
    cout << " Node name: " << nodeName << endl;
    if (parent !=NULL)
        cout << " My parent is " << parent->nodeName <<endl;
    cout << "My children are: " << endl;
    if (child != NULL)
        child->print();
    cout << "========================" << endl;

}
Created::~Created() {
    cout << "Desctructor of " << nodeName << endl;
    delete child;
}


Creator::Creator()
{
    root = new Created();
}

void Creator::addChild(string name)
{
    root->addChild(new Created(name));
}

void Creator::print()
{
    root->print();
}

Creator::~Creator() {
    cout << "Desctructor of Creator" << endl;
    delete root;
}

