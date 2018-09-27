//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H

template < class T>
class BSTNode {
public:
    BSTNode(T data);

    BSTNode(BSTNode *parent, T data);

private:
    BSTNode *parent, *childNumberOne, *childNumberRight;
    T data;
};

template<class T>
BSTNode<T>::BSTNode(T data):data(data) {}

template<class T>
BSTNode<T>::BSTNode(BSTNode *parent, T data):parent(parent), data(data) {}


#endif //TREES_BSTNODE_H
