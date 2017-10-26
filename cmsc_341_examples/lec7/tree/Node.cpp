//
// Created by jsleeman on 10/7/17.
//Based on https://www.cprogramming.com/tutorial/lesson18.html
//This code was used to support a lecture and may not be completely correct.
//Use at your own risk and if this is for a project, please don't just copy and //reuse.  Understand how to create a BST on your own.
//
#include "Node.h"
#include <iostream>
using namespace std;
Node::Node() {
    key=-1;
    left=NULL;
    right=NULL;
}
Node::Node(string aKey) {
    key=aKey;
    left=NULL;
    right=NULL;
}
void Node::setKey(string aKey) {
    key = aKey;
}
void Node::setLeft(Node* aLeft) {
    left = aLeft;
}
void Node::setRight(Node* aRight) {
    right = aRight;
}
string Node::Key() {
    return key;
}
Node* Node::Left() {
    return left;
}
Node* Node::Right() {
    return right;
}

