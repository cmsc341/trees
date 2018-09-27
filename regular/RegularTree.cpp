//
// Created by Ben Johnson on 9/24/18.
//

#include "RegularTree.h"

vector<RegularNodeIterator> RegularTree::preorderTraverse() {
    return RegularNodeIterator(root).preorderTraverse();
}
