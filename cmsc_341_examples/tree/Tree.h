//
// Created by jsleeman on 10/7/17.
// Based on http://www.cplusplus.com/forum/beginner/131457/
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

