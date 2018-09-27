//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H

template <class T>
class BSTNode {
public:
    BSTNode(T data) : data(data) {}

    BSTNode(T data, BSTNode *parent) : data(data), parent(parent) {}
    void insert(T data);
private:
    T data;
    BSTNode * parent, *left, *right;
};

template<class T>
void BSTNode<T>::insert(T data) {
    // compare the data to insert to our data
    // if its bigger, go right
    // if its smaller, go left
    // keep doing that
    if (data > this->data) {
        if (right != NULL) {

            this->right->insert(data);
        } else {
            this->right = new BSTNode(data, this);
        }
    }
}

#include "BSTNode.cpp"

#endif //TREES_BSTNODE_H
