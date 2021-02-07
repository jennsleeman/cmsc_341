//
// Created by jsleeman on 10/7/17.
// Based on http://www.cplusplus.com/forum/beginner/131457/
//
//
#ifndef TREEES_NODE_H
#define TREEES_NODE_H
#include <iostream>
// Node class
using namespace std;

class Node {
    string key;
    Node* left;
    Node* right;
public:
    Node();
    Node(string aKey);
    void setKey(string aKey);
    void setLeft(Node* aLeft);
    void setRight(Node* aRight);
    string Key();
    Node* Left();
    Node* Right();
};

#endif //TREEES_NODE_H

