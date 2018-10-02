//
// Created by Ben Johnson on 9/27/18.
//

#include "BSTNode.h"

template<class K, class V>
BSTNode<K, V>::BSTNode(K key, V value) {
    this->key = key;
    this->value = value;
}

template<class K, class V>
BSTNode<K, V>::BSTNode(BSTNode *parent, K key, V value) {
    this->parent = parent;
    this->key = key;
    this->value = value;
}
