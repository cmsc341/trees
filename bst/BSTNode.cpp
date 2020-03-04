//
// Created by Ben Johnson on 9/27/18.
//

#include "BSTNode.h"

BSTNode::BSTNode(BSTNode *parent, int data) {
  _parent = parent;
  _left = nullptr;
  _right = nullptr;
  _data = data;
}

void BSTNode::insert(int data) {

  if (data == _data) {
    return;
  }
  if (data < _data) {
    if (_left == nullptr) {
      _left = new BSTNode(this, data);
    } else {
      // GO?
      _left->insert(data);
    }
  } else {
    if (_right == nullptr) {
      _right = new BSTNode(this, data);
    } else {
      // GO?
      _right->insert(data);
    }
  }
}

BSTNode *BSTNode::subtreeSuccessor() {
  BSTNode * myHeir = _right;
  while (myHeir->_left != nullptr) {
    myHeir = myHeir->_left;
  }
  return myHeir;
}

void BSTNode::swap(BSTNode *other) {
  BSTNode * temp;
  temp = other->_right;
  other->_right = _right;
  _right = temp;

  temp = other->_left;
  other->_left = _left;
  _left = temp;

  temp = other->_parent;
  other->_parent = _parent;
  _parent = temp;
}
