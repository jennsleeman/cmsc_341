//
// Created by jsleeman on 10/7/17.
//Based on https://www.cprogramming.com/tutorial/lesson18.html
//This code was used to support a lecture and may not be completely correct.
//Use at your own risk and if this is for a project, please don't just copy and //reuse.  Understand how to create a BST on your own.
//
#include <iostream>
#include <queue>
#include "Tree.h"
using namespace std;


// Constructor
Tree::Tree() {
    root = NULL;
}

// Destructor
Tree::~Tree() {
    remove(root);
}

// Delete the node
void Tree::remove(Node *leaf) {
    if (leaf != NULL) {
        remove(leaf->Left());
        remove(leaf->Right());
        delete leaf;
    }
}

// Add a node
void Tree::insert(string key) {
    if (this->root == NULL) {
        cout << "add root node ... " << key << endl;
        Node *n = new Node();
        n->setKey(key);
        this->root = n;
    } else {
        cout << "add other node ... " << key << endl;
        insert(key, this->root);
    }

}

// Inserts a node (private)
void Tree::insert(string key, Node *leaf) {
    if (key <= leaf->Key()) {
        if (leaf->Left() != NULL)
            insert(key, leaf->Left());
        else {
            Node *n = new Node();
            n->setKey(key);
            leaf->setLeft(n);
        }
    } else {
        if (leaf->Right() != NULL)
            insert(key, leaf->Right());
        else {
            Node *n = new Node();
            n->setKey(key);
            leaf->setRight(n);
        }
    }
}

// Print the tree level-order assisted by queue
void Tree::levelOrder(Node *n) {
    // Create a queue
    queue < Node * > q;

    // Push the root
    q.push(n);

    while (!q.empty()) {
        // Dequeue a node from front
        Node *v = q.front();
        cout << v->Key() << " ";

        // Enqueue the left children
        if (v->Left() != NULL)
            q.push(v->Left());

        // Enqueue the right children
        if (v->Right() != NULL)
            q.push(v->Right());

        // Pop the visited node
        q.pop();
    }
}

void Tree::Preorder(Node *node) {
    if (node) {
        cout << node->Key() << " ";
        Preorder(node->Left());
        Preorder(node->Right());
    }
}

void Tree::Inorder(Node *Root) {
    if (Root != NULL) {
        Inorder(Root->Left());
        cout << Root->Key() << endl;
        Inorder(Root->Right());

    }
}

void Tree::Postorder(Node *Root) {
    if (Root != NULL) {

        Postorder(Root->Left());
        Postorder(Root->Right());
        cout << Root->Key() << endl;

    }
}

