//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BST_H
#define TREES_BST_H


#include "BSTNode.h"
#include "BSTNode.cpp"

template <class K, class V>
class BST {
public:
    BST() {}
    void insert(K key, V value);

private:
    BSTNode<K,V> * root;
};

template<class K, class V>
void BST<K, V>::insert(K key, V value) {

//    int mollusk = value;
    root->insert(key, value);
}

#include "BSTNode.cpp"

#endif //TREES_BST_H
