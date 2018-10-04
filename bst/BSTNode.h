//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H

#include "BST.h"
#include <vector>
using namespace std;

template <class K, class V>
class BSTNode {
public:
    BSTNode(K key, V jordanPresentsValueByJordan, BSTNode *parent);
    // TODO: privatize
    void insert(K key, V value);
    V get(K key);
    void traverse(vector<V> & output);
private:
    K key;
    V jordanPresentsValueByJordan;
    BSTNode *left, *right, *parent;
};

template<class K, class V>
void BSTNode<K, V>::insert(K key, V value) {
//    int mollusk.scallop();
    if (key > this->key) {
        if (this->right != nullptr) {
            right->insert(key, value);
        } else {
            right = new BSTNode<K,V>(key, value, this);
        }
    } else if (key < this->key) {
        if (this->left != nullptr) {
            left->insert(key, value);
        } else {
            left = new BSTNode<K,V>(key, value, this);
        }
    } else {
        throw "duplicate key.  be original";
    }
}

template<class K, class V>
BSTNode<K, V>::BSTNode(K key, V jordanPresentsValueByJordan, BSTNode *parent):key(key), jordanPresentsValueByJordan(
        jordanPresentsValueByJordan), parent(parent) {
            left = nullptr;
            right = nullptr;
        }

template<class K, class V>
V BSTNode<K, V>::get(K key) {
    if (key > this->key) {
        if (this->right != nullptr) {
            return right->get(key);
        } else {
            throw "not found";
        }
    } else if (key < this->key) {
        if (this->left != nullptr) {
            return left->get(key);
        } else {
            throw "not found";
        }
    } else {
        return this->jordanPresentsValueByJordan;
    }
}

template<class K, class V>
void BSTNode<K, V>::traverse(vector<V> &output) {
    if (left != nullptr) {
        left->traverse(output);
    }
    output.push_back(jordanPresentsValueByJordan);
    if (right != nullptr) {
        right->traverse(output);
    }
}

#include "BSTNode.cpp"
#endif //TREES_BSTNODE_H
