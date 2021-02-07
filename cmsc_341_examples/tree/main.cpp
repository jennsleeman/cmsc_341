//
//Playing with trees.
//Based on http://www.cplusplus.com/forum/beginner/131457/
//
#include <iostream>
#include "Tree.h"
using namespace std;


int main() {
     Tree* tree = new Tree();
     tree->insert("N");
     tree->insert("B");
     tree->insert("D");
     tree->insert("F");
     tree->insert("C");
     tree->insert("Z");

     cout << "Level order traversal" << endl;
     tree->levelOrder(tree->Root());
     cout << endl;


     cout << "Pre order traversal" << endl;
     tree->Preorder(tree->Root());
     cout << endl;


     cout << "In order traversal" << endl;
     tree->Inorder(tree->Root());
     cout << endl;

     cout << "Post order traversal" << endl;
     tree->Postorder(tree->Root());
     cout << endl;

     delete tree;
     
     return 0;
}

