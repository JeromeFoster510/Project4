#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

int main() {
    
    srand(time(0));


    int numbers[35];
    cout << "Random Numbers (Original Order): ";
    for (int i = 0; i < 35; ++i) {
        int randNum;
        bool isRepeat;
        do {
            randNum = rand() % 100;
            isRepeat = false;
            for (int j = 0; j < i; ++j) {
                if (numbers[j] == randNum) {
                    isRepeat = true;
                    break;
                }
            }
        } while (isRepeat);
        numbers[i] = randNum;
        cout << numbers[i] << " ";
    }

    
    Node* root = nullptr;

    
    for (int i = 0; i < 35; ++i) {
        insert(root, numbers[i]);
    }

    
    cout << "\n\nPre-order Traversal: ";
    preOrder(root);

    cout << "\n\nIn-order Traversal: ";
    inOrder(root);

    cout << "\n\nPost-order Traversal: ";
    postOrder(root);

    return 0;
}