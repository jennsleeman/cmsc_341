//
// Created by jsleeman on 10/7/17.
// Based on http://www.cplusplus.com/forum/beginner/131457/
//
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

