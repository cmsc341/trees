//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H


#include "BST.h"
class BST;
class BSTNode {
public:
  BSTNode(BSTNode *parent, int data);

  void insert(int data);
  void remove(int data);

private:
  friend BST;
  BSTNode * right, * left, * parent;
  int data;

  void swapWith(BSTNode *other);

  BSTNode *descendantSuccessor();

  void dump();
};


#endif //TREES_BSTNODE_H
