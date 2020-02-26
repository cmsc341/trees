//
// Created by Ben Johnson on 9/26/18.
//

#ifndef TREES_BINARYTREEITERATOR_H
#define TREES_BINARYTREEITERATOR_H


#include "BinaryTreeNode.h"

class BinaryTreeIterator {
public:
  void up();

  void left();

  void right();

private:
  BinaryTreeNode *node;
};


#endif //TREES_BINARYTREEITERATOR_H
