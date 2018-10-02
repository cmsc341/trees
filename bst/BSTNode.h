//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H

template < class K, class V>
class BSTNode {
public:
    BSTNode(K key, V value);

    BSTNode(BSTNode *parent, K key, V value);
    void insert(K key, V value);
private:
    BSTNode *parent, *childNumberOne, *childNumberRight;
    K key;
    V value;
};

template<class K, class V>
void BSTNode<K, V>::insert(K key, V value) {

    if (key > this->key) {
        //go right
        if (this->childNumberRight != nullptr) {
            this->childNumberRight->insert(key, value);
        } else {
            this->childNumberRight = new BSTNode<K,V>(this, key, value);
        }
    } else if (key < this->key) {
        if (this->childNumberOne != nullptr) {
            this->childNumberOne->insert(key, value);
        } else {
            this->childNumberOne = new BSTNode<K,V>(this, key, value);
        }
    } else {
        // two options:
        // overwrite my value
        // throw anger
        throw "anger";
    }


    // the last part, by Ben Johnson
    // so the mighty warrior took her sword and wiped it clean of
    // goose carcass
}

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

#include "BSTNode.cpp"


#endif //TREES_BSTNODE_H
