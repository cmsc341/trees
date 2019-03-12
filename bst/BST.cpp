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
