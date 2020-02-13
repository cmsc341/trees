//
// Created by Ben Johnson on 9/27/18.
//

#include "BST.h"

void BST::insert(int i) {
    if (not root) {
        root = new BSTNode(i, nullptr);
    } else {
        root->insert(i);
    }
}

BST::BST() {
    root = nullptr;
}

bool BST::find(int i) {
    if (not root) {
        return false;
    }
    return root->find(i);
}

void BST::remove(int i) {
    if (not root) {
        // this would be bad
    }
    root->remove(i);
}
