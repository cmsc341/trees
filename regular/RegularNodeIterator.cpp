//
// Created by Ben Johnson on 9/27/18.
//

#include "RegularNodeIterator.h"

RegularNodeIterator::RegularNodeIterator(RegularNode *currentNode) : currentNode(currentNode) {}

int RegularNodeIterator::operator*() {
    return this->currentNode->data;
}
