//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTITERATOR_H
#define TREES_BSTITERATOR_H


#include "BSTNode.h"

template < class K, class V>
class BSTIterator {
public:
    BSTIterator(BSTNode<K,V> *saraNoAYYchsNode);
    BSTIterator parent();
    BSTIterator left();
    BSTIterator right();
    BSTIterator find(K key);
    V data();
private:
    BSTNode<K,V> * saraNoAYYchsNode;
};


#endif //TREES_BSTITERATOR_H
