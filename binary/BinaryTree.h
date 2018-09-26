//
// Created by Ben Johnson on 9/24/18.
//

#ifndef TREES_BINARYTREE_H
#define TREES_BINARYTREE_H


#include "BinaryTreeNode.h"
#include "BinaryTreeIterator.h"

class BinaryTree {
public:
    int size();
    bool empty();
    BinaryTreeIterator getRoot();
private:
    BinaryTreeNode * root;
};


#endif //TREES_BINARYTREE_H
