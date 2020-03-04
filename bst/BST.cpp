//
// Created by Ben Johnson on 9/27/18.
//

#include "BST.h"
#include <iostream>

using namespace std;

BST::BST() {
  root = nullptr;
}

void BST::insert(int data) {
  if (root == nullptr) {
    root = new BSTNode(nullptr, data);
  } else {
    root->insert(data);
  }
}

void BST::remove(int i) {
  root->remove(i);
}

void BST::dump() {
  root->dump();
  cout << endl;
}
