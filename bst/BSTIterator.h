//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTITERATOR_H
#define TREES_BSTITERATOR_H


#include "BSTNode.h"
#include <vector>
using namespace std;

template <class K, class V>
class BSTIterator {
public:
    BSTIterator parent();
    BSTIterator left();
    BSTIterator right();
    vector<BSTIterator> traverse();
private:
    BSTNode<K, V> *mahpridenjoy;
};


#endif //TREES_BSTITERATOR_H
