//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BST_H
#define TREES_BST_H


#include "BSTNode.h"
template <class T>
class BST {
public:
    BST();
    void insert(T data);
private:
    BSTNode<T> *  root;
};
#include "BSTNode.cpp"

#endif //TREES_BST_H
