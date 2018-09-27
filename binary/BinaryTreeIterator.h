//
// Created by Ben Johnson on 9/26/18.
//

#ifndef TREES_BINARYTREEITERATOR_H
#define TREES_BINARYTREEITERATOR_H


#include "BinaryTreeNode.h"
#include <vector>
using namespace std;

class BinaryTreeIterator {
public:
    BinaryTreeIterator(BinaryTreeNode *node);

    int data();
    int operator*();
    BinaryTreeIterator parent();
    int numChildren();
    BinaryTreeIterator left();
    BinaryTreeIterator right();

    vector<BinaryTreeIterator> preorderTraverse();
    vector<BinaryTreeIterator> postorderTraverse();
    vector<BinaryTreeIterator> inorderTraverse();
private:
    BinaryTreeNode *node;
};


#endif //TREES_BINARYTREEITERATOR_H
