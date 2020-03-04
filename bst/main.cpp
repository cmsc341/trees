//
// Created by Ben Johnson on 2019-03-11.
//

#include "BST.h"

int main() {
    // we write this first because we're awesome
    BST tree;
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(-1);
    tree.insert(27);
    tree.insert(42);
    tree.insert(101);
    tree.dump();
}