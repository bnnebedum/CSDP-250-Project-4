// Bede Nnebedum
// CSDP 250 - Fall 2023
// Project 4

#include <iostream>
#include "BST.cpp"
#include "BST.h"

using namespace std;

int main()
{
    BSTNode *root = nullptr;

    for (int i = 0; i < 40; i++) root = insert(root, rand() % 100 + 1);

    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << "\n\nInorder Traversal: ";
    inorder(root);

    cout << "\n\nPostorder Traversal: ";
    postorder(root);

    cout << endl << endl;
    return 0;
}