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
    vector<BSTIterator<K, V>> sortedData();
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

#endif //TREES_BST_H
