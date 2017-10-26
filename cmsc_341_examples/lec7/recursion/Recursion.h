#ifndef RECURSION_H
#define RECURSION_H
#include <iostream>
using namespace std;
class Created{
private:
    Created* child;
    Created* parent;
    string nodeName;
    void setRoot(Created* inParent);
public:
    Created();
    Created(string inName);
    void addChild(Created* newChild);
    void print();
    ~Created();

};

class Creator{
private:
    Created* root;
public:
    Creator();
    void addChild(string name);
    void print();
    ~Creator();
};

#endif
