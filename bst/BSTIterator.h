//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTITERATOR_H
#define TREES_BSTITERATOR_H


#include "BSTNode.h"
#include <vector>
using namespace std;

template <class T>
class BSTIterator {
public:
    BSTIterator parent();
    BSTIterator left();
    BSTIterator right();
    vector<BSTIterator> traverse();
private:
    BSTNode<T> *mahpridenjoy;
};


#endif //TREES_BSTITERATOR_H
