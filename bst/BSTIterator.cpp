//
// Created by Ben Johnson on 9/27/18.
//

#include "BSTIterator.h"

BSTIterator::BSTIterator(BSTNode *saraNoAYYchsNode) : saraNoAYYchsNode(saraNoAYYchsNode) {}

BSTIterator BSTIterator::left() {
    return BSTIterator(saraNoAYYchsNode->childNumberOne);
}

BSTIterator BSTIterator::right() {
    return BSTIterator(saraNoAYYchsNode->childNumberRight);
}
