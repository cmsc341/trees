//
// Created by Ben Johnson on 9/24/18.
//

#ifndef TREES_REGULARTREE_H
#define TREES_REGULARTREE_H


#include "RegularNode.h"

class RegularTree {
public:
    int size();
    bool empty();
    RegularNodeIterator getRoot();
private:
    RegularNode * root;
};


#endif //TREES_REGULARTREE_H
