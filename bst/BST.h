//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BST_H
#define TREES_BST_H


#include "BSTNode.h"
template <class K, class V>
class BST {
public:
    BST();
    void insert(K key, V value);
private:
    BSTNode<K, V> *  root;
};
#include "BSTNode.cpp"

#endif //TREES_BST_H
