//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BST_H
#define TREES_BST_H


#include "BSTNode.h"
class BSTNode;

class BST {
public:
  BST();
  void insert(int data);

  void remove(int i);

  void dump();

private:
  BSTNode * root;

};


#endif //TREES_BST_H
