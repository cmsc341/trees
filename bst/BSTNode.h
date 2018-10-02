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

private:
    BSTNode *parent, *childNumberOne, *childNumberRight;
    K key;
    V value;
};



#include "BSTNode.cpp"


#endif //TREES_BSTNODE_H
