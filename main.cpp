#include "bst/BST.h"
#include <string>
#include <iostream>

using namespace std;
int main() {
    BST<int, string> tree;
    tree.insert(0, "I shall always be first!");
    tree.insert(7, "Lucky, lucky.");
    tree.insert(3, "left turn.");
    tree.insert(10000, "I am always last.");
    tree.insert(-100, "Haha, who's first now?");
    tree.insert(-101, "Me, nerd.");
    try {
        cout << tree.get(666) << endl;
    } catch (...) {
        cout << "error" << endl;
    }
    cout << tree.get(0) << endl;
    cout << tree.get(3) << endl;
    cout << "and now in order! >>>>>>>>" << endl;
    vector<string> results = tree.sorted();
    for (auto & item : results) {
        cout << item << endl;
    }
    return 0;
}
