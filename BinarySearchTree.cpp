#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

Node::Node(int val) : data(val), leftNext(nullptr), rightNext(nullptr) {}

void insert(Node*& root, int val) {
    if (!root) {
        root = new Node(val);
    }
    else {
        if (val < root->data) {
            insert(root->leftNext, val);
        }
        else {
            insert(root->rightNext, val);
        }
    }
}

void preOrder(Node* root) {
    if (root) {
        cout << root->data << " ";
        preOrder(root->leftNext);
        preOrder(root->rightNext);
    }
}

void inOrder(Node* root) {
    if (root) {
        inOrder(root->leftNext);
        cout << root->data << " ";
        inOrder(root->rightNext);
    }
}

void postOrder(Node* root) {
    if (root) {
        postOrder(root->leftNext);
        postOrder(root->rightNext);
        cout << root->data << " ";
    }
}