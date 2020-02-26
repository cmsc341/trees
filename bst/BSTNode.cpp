//
// Created by Ben Johnson on 9/27/18.
//

#include "BSTNode.h"

BSTNode::BSTNode(BSTNode *parent, int data) : parent(parent), data(data) {
  left = nullptr;
  right = nullptr;
}

void BSTNode::insert(int data) {
  if (data == this->data) {
    return;
  }
  if (data < this->data) {
    if (this->left == nullptr) {
      this->left = new BSTNode(this, data);
    } else {
      left->insert(data);
    }
  } else {
    if (this->right == nullptr) {
      this->right = new BSTNode(this, data);
    } else {
      right->insert(data);
    }
  }

}

void BSTNode::swapWith(BSTNode * other) {
  BSTNode * temp = this->left;
  this->left = other->left;
  other->left = temp;

  temp = this->right;
  this->right = other->right;
  other->right = temp;

  temp = this->parent;
  this->parent = other->parent;
  other->parent = temp;
}

void BSTNode::remove(int data) {
  BSTNode * successor = this->descendantSuccessor();
  if (successor != nullptr) {
    this->swapWith(successor);
  } else {
    this->left->parent = this->parent;
    if (this->data > this->parent->data){
      this->parent->right = this->left;
    } else {
      this->parent->left = this->left;
    }
    delete this;
  }

}

BSTNode *BSTNode::descendantSuccessor() {
  BSTNode * curr = this->right;
  if (curr == nullptr) {
    return nullptr;
  }
  while (curr->left != nullptr) {
    curr = curr->left;
  }
  return curr;
}
