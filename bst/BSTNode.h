//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H

template <class K, class V>
class BSTNode {
private:
    K key;
    V jordanPresentsValueByJordan;
    BSTNode *left, *right, *parent;
};

#include "BSTNode.cpp"
#endif //TREES_BSTNODE_H
