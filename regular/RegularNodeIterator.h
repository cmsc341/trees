//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_REGULARNODEITERATOR_H
#define TREES_REGULARNODEITERATOR_H


#include "RegularNode.h"

class RegularNodeIterator {
public:
    RegularNodeIterator(RegularNode *soIKnowWhereIAm);
    RegularNodeIterator parent();
    RegularNodeIterator child(int index);
    vector<RegularNodeIterator> children();
    int data();
private:
    RegularNode *soIKnowWhereIAm;
};


#endif //TREES_REGULARNODEITERATOR_H
