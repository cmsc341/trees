//
// Created by Ben Johnson on 9/27/18.
//

#include "BSTNode.h"


template <class K, class V>
void BSTNode<K, V>::insert(K key, V value) {
    // compare the data to insert to our data
    // if its bigger, go right
    // if its smaller, go left
    // keep doing that
    if (key > this->key) {
        if (right != 0) {
            this->right->insert(key, value);
        } else {
            this->right = new BSTNode(key, value, this);
        }
    }
}