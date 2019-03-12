//
// Created by Ben Johnson on 2019-03-11.
//

#include <cstdlib>
#include "BST.h"

int main() {
    // we write this first because we're awesome
    BST tree;
    for (int i = 0; i < 100; ++i) {
        tree.insert(i);
    }

    BST randomTree;
    for (int j = 0; j < 100; ++j) {
        randomTree.insert(rand() % 1000);
    }
    int x = 1;
}