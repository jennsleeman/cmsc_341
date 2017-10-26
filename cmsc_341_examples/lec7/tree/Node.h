//
// Created by jsleeman on 10/7/17.
//Based on https://www.cprogramming.com/tutorial/lesson18.html
//This code was used to support a lecture and may not be completely correct.
//Use at your own risk and if this is for a project, please don't just copy and //reuse.  Understand how to create a BST on your own.
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

