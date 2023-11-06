#ifndef BinarySearchTree_h
#define BinarySearchTree_h
struct Node {
    int data;
    Node* leftNext;
    Node* rightNext;
    Node(int val);
};

void insert(Node*& root, int val);
void preOrder(Node* root);
void inOrder(Node* root);
void postOrder(Node* root);










#endif
