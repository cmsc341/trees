//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H

template <class K, class V>
class BSTNode {
public:
    BSTNode(K key, V value) : key(key), value(value) {}

    BSTNode(K key, V value, BSTNode *parent) : key(key), value(value), parent(parent) {}

    void insert(K key, V value);
private:
    K key;
    V value;
    BSTNode * parent, *left, *right;
};



#include "BSTNode.cpp"

#endif //TREES_BSTNODE_H
