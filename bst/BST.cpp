//
// Created by Ben Johnson on 9/27/18.
//

#include "BST.h"
#include <iostream>

using namespace std;
void BST::insert(int data) {
  if (root == nullptr) {
    root = new BSTNode(nullptr, data);
  } else {
    root->insert(data);
  }
}

BST::BST() {
  root = nullptr;
}

void BST::dump() {
  root->dump();
  cout << endl;
}
