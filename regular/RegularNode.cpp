//
// Created by Ben Johnson on 9/24/18.
//

#include "RegularNode.h"

RegularNode::RegularNode(int data) : data(data) {}

RegularNode::RegularNode(int data, RegularNode *parent) : data(data), parent(parent) {}
