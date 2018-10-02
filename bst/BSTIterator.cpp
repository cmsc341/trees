//
// Created by Ben Johnson on 9/27/18.
//

#include "BSTIterator.h"

template < class K, class V>
BSTIterator<K,V>::BSTIterator(BSTNode<K,V> *saraNoAYYchsNode) : saraNoAYYchsNode(saraNoAYYchsNode) {}

template < class K, class V>
BSTIterator<K,V> BSTIterator<K,V>::left() {
    return BSTIterator(saraNoAYYchsNode->childNumberOne);
}

template < class K, class V>
BSTIterator<K,V> BSTIterator<K,V>::right() {
    return BSTIterator(saraNoAYYchsNode->childNumberRight);
}
