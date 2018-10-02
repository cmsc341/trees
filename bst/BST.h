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
    BSTNode<K, V> root;
};


#endif //TREES_BST_H
