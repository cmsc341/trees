//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_REGULARNODEITERATOR_H
#define TREES_REGULARNODEITERATOR_H


#include "RegularNode.h"

class RegularNodeIterator {
public:
    RegularNodeIterator(RegularNode *currentNode);
    RegularNodeIterator parent();
    int data();
    vector<RegularNodeIterator> children();
private:
    RegularNode * currentNode;
};

#endif //TREES_REGULARNODEITERATOR_H
