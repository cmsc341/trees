//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BST_H
#define TREES_BST_H


#include "BSTNode.h"
#include "BSTNode.cpp"
#include <vector>
using namespace std;
template <class K, class V>
class BSTNode;
template <class K, class V>
class BST {
public:
    BST() {root = nullptr;}
    void insert(K key, V value);
    V get(K key);
    vector<V> traverse();
private:
    BSTNode<K,V> * root;
};

template<class K, class V>
void BST<K, V>::insert(K key, V value) {
    if (root == nullptr) {
        root = new BSTNode<K,V>(key, value, nullptr);
    } else {
//    int mollusk = value;
        root->insert(key, value);
    }
}

template<class K, class V>
V BST<K, V>::get(K key) {
    if (root == nullptr) {
        throw "something, hard";
    } else {
//    int mollusk = value;
        return root->get(key);
    }
}

template<class K, class V>
vector<V> BST<K, V>::traverse() {
    if (root == nullptr) {
        throw "something, hard";
    }
    vector<V> output;
    root->traverse(output);
    return output;
}

#include "BSTNode.cpp"

#endif //TREES_BST_H
