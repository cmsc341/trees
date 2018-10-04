//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BST_H
#define TREES_BST_H


#include "BSTNode.h"
#include "BSTIterator.h"
#include <vector>
using namespace std;
template <class K, class V>
class BST {
public:
    BST();
    void insert(K key, V value);
    vector<V> sorted();
    V get(K key);
private:
    BSTNode<K, V>* root;
};

template<class K, class V>
void BST<K, V>::insert(K key, V value) {
    if (root != nullptr) {

        root->insert(key, value);
    } else {
        root = new BSTNode<K, V>(nullptr, key, value);
    }
}


template <class K, class V>
BST<K,V>::BST() {}

template<class K, class V>
V BST<K, V>::get(K key) {
    if (root != nullptr) {
        return root->get(key);
    } else {
        throw "settle down and insert something first";
    }
}

template<class K, class V>
vector<V> BST<K, V>::sorted() {
    vector<V> output;
    if (root == nullptr) {
        throw "I am poor and sad.  Give me data sir!";
    }

    return root->sorted();
}

#endif //TREES_BST_H
