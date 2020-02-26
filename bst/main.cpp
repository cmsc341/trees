//
// Created by Ben Johnson on 2019-03-11.
//

#include "BST.h"
#include <iostream>

using namespace std;
int main() {
    BST tree;
    for (int i = 0; i < 100; ++i) {
        tree.insert(i % 23 * 7 + 2);
    }
    for (int i = 100; i > 0; --i) {
        tree.insert(i % 25 * -7 + 2);
    }

    tree.remove(-159);
    cout << "Done." << endl;
}