// Bede Nnebedum
// CSDP 250 - Fall 2023
// Project 4

#include <iostream>
#include "BST.h"

using namespace std;

BSTNode *createNode(int VALUE)
{
    BSTNode *newNode = new BSTNode;

    newNode -> value = VALUE;

    return newNode;
}

BSTNode *insert(BSTNode *root, int VALUE)
{
    if (!root) root = createNode(VALUE);

    else if (VALUE > root -> value) root -> rightNext = insert(root -> rightNext, VALUE);

    else root -> leftNext = insert(root -> leftNext, VALUE);

    return root;
}

void preorder(BSTNode *node)
{
    if (!node) return;

    cout << node -> value << " ";

    preorder(node -> leftNext);

    preorder(node -> rightNext);
}

void inorder(BSTNode *node)
{
    if (!node) return;

    inorder(node -> leftNext);

    cout << node -> value << " ";

    inorder(node -> rightNext);
}

void postorder(BSTNode *node)
{
    if (!node) return;

    postorder(node -> leftNext);

    postorder(node -> rightNext);

    cout << node -> value << " ";
}


