//
// Created by jsleeman on 10/7/17.
//Based on https://www.cprogramming.com/tutorial/lesson18.html
//This code was used to support a lecture and may not be completely correct.
//Use at your own risk and if this is for a project, please don't just copy and //reuse.  Understand how to create a BST on your own.
//
//
#ifndef TREEES_TREE_H
#define TREEES_TREE_H

#include "Node.h"


// Tree class
class Tree {
    Node* root;
public:
    Tree();
    ~Tree();
    Node* Root() { return root; };
    void insert(string key);
    void levelOrder(Node* n);
    void Inorder(Node* );
    void Postorder(Node* );
    void Preorder(Node* node);
private:
    void insert(string key, Node* leaf);
    void remove(Node* leaf);
};
#endif //TREEES_TREE_H

