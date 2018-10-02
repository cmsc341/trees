//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BST_H
#define TREES_BST_H


#include "BSTNode.h"
#include <vector>
using namespace std;
template <class K, class V>
class BST {
public:
    BST();
    void insert(K key, V value);

    V get(K key);
    vector<V> sorted();

private:
    BSTNode<K, V> *  root;
};

template <class K, class V>
BST<K, V>::BST() {
    root = 0;
}

template<class K, class V>
V BST<K, V>::get(K key) {

    return root->get(key);
}

template <class K, class V>
void BST<K, V>::insert(K key, V value) {
    if (root == 0) {
        root = new BSTNode<K, V>(key, value);
        return;
    }
    root->insert(key, value);
}

template<class K, class V>
vector<V> BST<K, V>::sorted() {
    return this->root->sorted();
}

#include "BSTNode.cpp"

#endif //TREES_BST_H
