#include "bst/BST.h"
#include <string>
using namespace std;
int main() {
    BST<int, string> tree;
    tree.insert(0, "I shall always be first!");
    tree.insert(3, "left turn!");
    tree.insert(7, "Lucky, lucky.");
    tree.insert(10000, "I am always last.");
    tree.insert(-100, "Haha, who's first now?");
    return 0;
}
