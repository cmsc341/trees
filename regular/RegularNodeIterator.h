//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_REGULARNODEITERATOR_H
#define TREES_REGULARNODEITERATOR_H


#include "RegularNode.h"

class RegularNodeIterator {
public:
    RegularNodeIterator(RegularNode *node);

    int data();
    int operator*();
    RegularNodeIterator child(int index);
    RegularNodeIterator parent();
    int numChildren();
    vector<RegularNodeIterator> children();

    vector<RegularNodeIterator> preorderTraverse();
    vector<RegularNodeIterator> postorderTraverse();
    vector<RegularNodeIterator> inorderTraverse();
private:
    RegularNode * node;
};


#endif //TREES_REGULARNODEITERATOR_H
