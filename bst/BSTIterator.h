//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTITERATOR_H
#define TREES_BSTITERATOR_H


#include "BSTNode.h"

template <class T>
class BSTIterator {
public:
    BSTIterator(BSTNode<T> *saraNoAYYchsNode);
    BSTIterator parent();
    BSTIterator left();
    BSTIterator right();
    BSTIterator find(T data);
    T data();
private:
    BSTNode * saraNoAYYchsNode;
};


#endif //TREES_BSTITERATOR_H
