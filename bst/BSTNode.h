//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H

#include <vector>
using namespace std;
template <class K, class V>
class BSTNode {
public:
    BSTNode(K key, V value) : key(key), value(value) {}

    BSTNode(K key, V value, BSTNode *parent) : key(key), value(value), parent(parent) {}

    void insert(K key, V value);
    vector<V> sorted();
    V get(K key);
private:
    K key;
    V value;
    BSTNode * parent, *left, *right;
};

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
    } else if (key < this->key) {
        if (left != 0) {
            this->left->insert(key, value);
        } else {
            this->left = new BSTNode(key, value, this);
        }
    } else {
        // few options
        // 1. good to go?
        // 2. replace value
        // 3. throw exception
        throw "assumptions were made : (";
    }
}



template <class K, class V>
V BSTNode<K, V>::get(K key) {
    // compare the data to insert to our data
    // if its bigger, go right
    // if its smaller, go left
    // keep doing that
    if (key > this->key) {
        if (right != 0) {
            return this->right->get(key);
        } else {
            throw "not found";
        }
    } else if (key < this->key) {
        if (left != 0) {
            return this->left->get(key);
        } else {
            throw "not fround";
        }
    } else {
        // few options
        // 1. good to go?
        // 2. replace value
        // 3. throw exception
        return this->value;
    }
}

template<class K, class V>
vector<V> BSTNode<K, V>::sorted() {
    vector<V> output;
    if (this->left != nullptr) {
        for (auto &item : this->left->sorted()) {
            output.push_back(item);
        }
    }
    output.push_back(this->value);
    if (this->right != nullptr) {
        for (auto &item : this->right->sorted()) {
            output.push_back(item);
        }
    }

    return output;
}

#include "BSTNode.cpp"

#endif //TREES_BSTNODE_H
